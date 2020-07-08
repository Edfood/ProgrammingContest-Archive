#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

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
  vector<int> a(n);
  vector<int> plus, minus;
  rep(i, n) {
    cin >> a[i];
    if (a[i] < 0) minus.push_back(a[i]);
    else plus.push_back(a[i]);
  }

  bool canPositive = false;

  if (plus.size() == 0) {
    if (k % 2 == 0) canPositive = true;
  } else {
    if (n == k) {
      if (minus.size() % 2 == 0) canPositive = true;
    } else {
      canPositive = true;
    }
  }

  mint ans = 1;
  if (canPositive) {
    sort(minus.rbegin(), minus.rend());
    sort(plus.begin(), plus.end());
    if (k % 2) {
      ans *= plus.back();
      plus.pop_back();
    }
    vector<ll> val;
    while (plus.size() >= 2) {
      ll value = plus.back(); plus.pop_back();
      value *= plus.back(); plus.pop_back();
      val.push_back(value);
    }

    while (minus.size() >= 2) {
      ll value = minus.back(); minus.pop_back();
      value *= minus.back(); minus.pop_back();
      val.push_back(value);
    }

    sort(val.rbegin(), val.rend());
    rep(i, k / 2) ans *= val[i];

  } else {
    sort(a.begin(), a.end(), [](int x, int y) {
      return abs(x) < abs(y);
    });
    rep(i, k) ans *= a[i];
  }

  cout << ans << endl;

}