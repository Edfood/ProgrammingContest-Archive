#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

const int MAXI = 2000000;
const int MAXV = 20;
int dp[MAXI][MAXV];

int main() {
  int n;
  cin >> n;
  rep(i, MAXI) rep(j, MAXV) {
    dp[i][j] = INF;
  }
  vector<int> x(n), y(n), z(n);
  rep(i, n) cin >> x[i] >> y[i] >> z[i];

  auto dist = [&](int v, int nv) {
    int d = abs(x[nv] - x[v]) + abs(y[nv] - y[v]) + max(0, z[nv] - z[v]);
    return d;
  };

  rep(i, n) {
    int b = 1<<i;
    dp[b][i] = dist(0, i);
  }

  rep(i, 1<<n) rep(j, n) {
    if (~i>>j&1) continue;
    rep(k, n) {
      if (i>>k&1) continue;
      int b = 1<<k;
      int d = dist(j, k);
      chmin(dp[i|b][k], dp[i][j] + d);
    }
  }
  int ans = dp[(1<<n) - 1][0];
  cout << ans << endl;
}