#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s, t;
  cin >> s >> t;
  vector<vector<int>> dp(3010, vector<int>(3010));
  rep(i, s.length()) {
    rep(j, t.length()) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      }
      dp[i + 1][j + 1] = max(dp[i + 1][j], max(dp[i + 1][j + 1], dp[i][j + 1]));
    }
  }
  string ans = "";
  int i = s.length();
  int j = t.length();
  while(i > 0 && j > 0) {
    if (dp[i][j] == dp[i][j - 1]) {
      --j;
    } else if (dp[i][j] == dp[i - 1][j]) {
      --i;
    } else {
      ans = s[i - 1] + ans;
      --i; --j;
    }
  }
  cout << ans << endl;
}