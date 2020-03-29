#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<double> p(n);
  rep(i, n) cin >> p[i];
  vector<vector<double>> dp(n + 1, vector<double>(n + 1));
  dp[0][0] = 1;
  rep(i, n) {
    rep(j, n) {
      dp[i + 1][j] += (1 - p[i]) * dp[i][j];
      dp[i + 1][j + 1] += p[i] * dp[i][j];
    }
  }
  double ans = 0;
  for (int i = (n+1)/2; i <= n; ++i) {
    ans += dp[n][i];
  }
  printf("%.10f\n", ans);
}