#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
#include<set>
#include<iomanip>
#include<map>
#include<type_traits>
#include<tuple>
#include<deque>
#include<cassert>
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;
const int MAXK = 100010;

ll gcd(ll a, ll b) { return b ? gcd(b, b % a) : a; }

ll powm(ll x, ll t) {
  if (!t) return 1;
  ll res = powm(x, t/ 2);
  (res *= res) %= mod;
  if (t&1) (res *= x) %= mod;
  return res;
}

struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

int main() {
  int n, k;
  cin >> n >> k;
  
  vector<mint> cnt(MAXK);
  for(int i = 1; i <= k; ++i) {
    cnt[i] = powm(k/i, n);
  }
  for(int i = k; i >= 1; --i) {
    mint sum = 0;
    for(int j = i + i; j <= k; j += i) sum += cnt[j];
    cnt[i] -= sum; 
  }
  mint ans = 0;
  for(int i = 1; i <= k; ++i) {
    ans += cnt[i] * i;
  }
  cout << ans << endl;
}