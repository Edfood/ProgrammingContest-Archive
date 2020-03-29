#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  rep(i, h) {
    cin >> a[i];
  }
  vector<vector<int>> dp(1010, vector<int>(1010));
  dp[0][0] = 1;
  rep(i, h) rep(j, w) {
    if(a[i][j] == '#') continue;
    dp[i + 1][j] += dp[i][j];
    dp[i + 1][j] %= mod;
    dp[i][j + 1] += dp[i][j];
    dp[i][j + 1] %= mod;
  }
  cout << dp[h - 1][w - 1] << endl;
}