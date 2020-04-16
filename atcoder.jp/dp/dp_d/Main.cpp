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
ll dp[110][100100];

int main() {
  int n, W;
  cin >> n >> W;
  rep(i, n) {
    int w, v;
    cin >> w >> v;
    for(int j = 0; j <= W; ++j) {
      chmax(dp[i + 1][j], dp[i][j]);
      if(j + w > W) continue;
      chmax(dp[i + 1][j + w], dp[i][j] + v);
    }
  }
  cout << dp[n][W] << endl;
}