#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 10007;

int dp[1000010];
int dfs(int x) {
  if(dp[x]) return dp[x];
  if(x == 1 || x == 2) return 0;
  if(x == 3 ) return 1;
  return dp[x] = (dfs(x - 3) + dfs(x - 2) + dfs(x - 1)) % mod;
}

int main() {
  int n;
  cin >> n;
  int ans = dfs(n);
  cout << ans << endl;
}