#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const ll INF = 1001001001000000;

ll dp[110][100100];
int main(){
  int n, W;
  cin >> n >> W;
  ll w[110], v[110];
  rep(i, n) cin >> w[i] >> v[i];

  rep(i, 110) rep(j, 100100) dp[i][j] = INF;
  dp[0][0] = 0;
  rep(i, n) {
    for(int j = 0; j <= 100000; ++j) {
      dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
      if(j - v[i] >= 0) dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
    }
  }
  
  ll ans = 0;
  rep(i, 100001) {
    if(dp[n][i] <= W) ans = i;
  }
  cout << ans << endl;
}