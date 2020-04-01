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
using namespace std;
typedef long long ll;
typedef pair<ll,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

int main(){
  int h, n;
  cin >> h >> n;
  vector<int> a(n), b(n);
  rep(i, n) {
    cin >> a[i] >> b[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(h + 1, INF));
  dp[0][0] = 0;
  rep(i, n) {
    for (int j = 0; j <= h; ++j) {
      int nj = min(a[i] + j, h);
      dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
      dp[i + 1][nj] = min(dp[i + 1][nj], dp[i + 1][j] + b[i]);
    }
  }
  cout << dp[n][h] << endl;
}