#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

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

mint dp[100][4][4][4];

int main() {
  int n;
  cin >> n;
  dp[0][3][3][3] = 1;
  rep(i,n)rep(j,4)rep(k,4)rep(l,4) {
    rep(d, 4) {
      if(d == 1 && l == 2 && k == 0) continue;
      if(d == 1 && l == 0 && k == 2) continue;
      if(d == 2 && l == 1 && k == 0) continue;
      if(d == 1 && l == 2 && j == 0) continue;
      if(d == 1 && k == 2 && j == 0) continue;
      dp[i + 1][d][l][k] += dp[i][l][k][j];
    }
  }
  mint ans = 0;
  rep(j,4)rep(k,4)rep(l,4) {
    ans += dp[n][j][k][l];
  }
  cout << ans << endl;
}