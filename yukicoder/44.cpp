#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
ll dp[51];

int main() {
  int n;
  cin >> n;
  dp[0] = 1;
  rep(i, n + 1) {
    if (i + 1 <= 50) dp[i + 1] += dp[i];
    if (i + 2 <= 50) dp[i + 2] += dp[i];
  }
  cout << dp[n] << endl;
}