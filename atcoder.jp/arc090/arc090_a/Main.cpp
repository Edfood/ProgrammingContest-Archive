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
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;


int main(){
  int n;
  cin >> n;
  vector<vector<int> > a(2, vector<int>(n));
  rep(i, n) cin >> a[0][i];
  rep(i, n) cin >> a[1][i];
  vector<vector<int> > dp(2, vector<int>(n + 1));
  dp[0][0] = a[0][0];
  dp[1][0] = a[1][0] + dp[0][0];
  for(int i = 1; i < n; ++i){
    dp[0][i] = dp[0][i - 1] + a[0][i];
    dp[1][i] = max(dp[0][i], dp[1][i - 1]) + a[1][i];
  }
  cout << dp[1][n - 1] << endl;
}
