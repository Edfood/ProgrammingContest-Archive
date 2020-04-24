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

const int MAXN = 1000;
mint dp[MAXN][MAXN];

vector<vector<int>> a;
int h, w;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

mint dfs(int x, int y) {
  if(dp[x][y].x > 0) return dp[x][y];
  mint res = 1;
  int na = a[x][y];
  rep(i, 4) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(0 <= nx && nx < h && 0 <= ny && ny < w && na < a[nx][ny]) res += dfs(nx, ny);
  }
  return dp[x][y] = res;
}

int main() {
  cin >> h >> w;
  a.resize(h, vector<int>(w));
  rep(i, h)rep(j, w) {
    cin >> a[i][j];
  }
  mint ans = 0;
  rep(i, h)rep(j, w) {
    ans += dfs(i, j);
  }

  cout << ans << endl;
}