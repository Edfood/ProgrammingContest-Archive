#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

vector<int> graph[200100];
int dp[200100];

int dfs(int n) {
  if(dp[n] > 0) {
    return dp[n];
  }
  int res = 0;
  for (int v : graph[n]) {
    res = max(dfs(v) + 1, res);
  }
  return dp[n] = res;
}

int main(){
  int n, m;
  cin >> n >> m;
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    graph[x].push_back(y);
  }
  int ans = 0;
  rep(i, n) {
    ans = max(ans, dfs(i));
  }
  
  cout << ans << endl;

}