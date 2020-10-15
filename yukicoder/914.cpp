#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
int n, m, K;
vector<vector<int>> a;
vector<vector<bool>> dp(11, vector<bool>(510));

int main() {
  cin >> n >> m >> K;
  a.resize(n, vector<int>(m));
  rep(i, n) {
    rep(j, m) {
      cin >> a[i][j];
    }
  }
  dp[0][0] = true;
  rep(i, n) rep(j, m) rep(k, K) {
    if (dp[i][k] == false) continue;
    int ni = i + 1;
    int nk = k + a[i][j];
    if (nk > K) continue;
    dp[ni][nk] = true;
  }
  int ans = INF;
  for (int i = K; i >= 0; --i) {
    if (dp[n][i]) {
      cout << K - i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}