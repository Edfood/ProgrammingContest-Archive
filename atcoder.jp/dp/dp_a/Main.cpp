#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
#include<set>
#include<iomanip>
#include<map>
#include<type_traits>
#include<tuple>
#include<deque>
#include<cassert>
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> dp(n + 10, INF);
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  dp[0] = 0;
  rep(i, n) {
    if(i + 2 < n) dp[i + 2] = min(dp[i] + abs(h[i + 2] - h[i]), dp[i + 2]);
    if(i + 1 < n) dp[i + 1] = min(dp[i] + abs(h[i + 1] - h[i]), dp[i + 1]);
    
  }

  cout << dp[n - 1] << endl;
}
