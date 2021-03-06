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
int dp[100100][3];

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
    dp[i + 1][0] = max(dp[i][1] + b, dp[i][2] + c);
    dp[i + 1][1] = max(dp[i][0] + a, dp[i][2] + c);
    dp[i + 1][2] = max(dp[i][1] + b, dp[i][0] + a);
    
  }
  int ans = max(dp[n][0], max(dp[n][1], dp[n][2]));
  cout << ans << endl;
}