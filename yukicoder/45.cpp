#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

vector<vector<int>> dp(10010, vector<int>(2));

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    int v;
    cin >> v;

    rep(j, 2) {
      // 拾わない
      chmax(dp[i + 1][0], dp[i][j]);

      // 拾う
      if (j == 1) continue;
      chmax(dp[i + 1][1], dp[i][j] + v);
    }
  }
  int ans = max(dp[n][0], dp[n][1]);
  cout << ans << endl;
}