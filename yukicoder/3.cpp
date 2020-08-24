#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int dp[10010];
int n;

int countOne(int x) {
  int res = 0;
  while (x > 0) {
    res += x&1;
    x = x>>1;
  }
  return res;
}

void dfs(int x, int depth=0) {
  if (x <= 0 || x > n) return;
  if (dp[x] <= depth) return;
  dp[x] = depth;
  int nums = countOne(x);
  dfs(x - nums, depth + 1);
  dfs(x + nums, depth + 1);
  return;
}

int main() {
  cin >> n;
  rep(i, n + 1) dp[i] = INF;

  dfs(1, 1);

  int ans = dp[n];
  if (ans == INF) ans = -1;
  cout << ans << endl; 

}