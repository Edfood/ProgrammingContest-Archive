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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  int k = 0;
  rep(i, h) rep(j, w) {
    if (s[i][j] == '.') k++;
  }


  vector<vector<int>> left(h, vector<int>(w));
  vector<vector<int>> right(h, vector<int>(w));
  vector<vector<int>> up(h, vector<int>(w));
  vector<vector<int>> down(h, vector<int>(w));

  // left to right
  rep(i, h) {
    int cur = 0;
    rep(j, w) {
      if (s[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      left[i][j] = cur;
    }
  }
  
  // right to left
  rep(i, h) {
    int cur = 0;
    for(int j = w - 1; j >= 0; --j) {
      if (s[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      right[i][j] = cur;
    }
  }

  // up to down
  rep(j, w) {
    int cur = 0;
    rep(i, h) {
      if (s[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      up[i][j] = cur;
    }
  }


  // down to up
  rep(j, w) {
    int cur = 0;
    for (int i = h - 1; i >= 0; --i) {
      if (s[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      down[i][j] = cur;
    }
  }

  mint ans = 0;

  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '#') continue;
      int light = left[i][j] + right[i][j] + up[i][j] + down[i][j] - 3;
      mint value = mint(2).pow(k - light) * (mint(2).pow(light) - 1);
      ans += value;
    }
  }

  cout << ans << endl;
}