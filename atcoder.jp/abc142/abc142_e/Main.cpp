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

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> key(m);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    pair<int, int> p;
    rep(i, b) {
      int c;
      cin >> c;
      --c;
      p.second |= 1<<c;
    }
    p.first = a;
    key[i] = p;
  }
  vector<int> dp(1<<n, INF);
  dp[0] = 0;
  rep(i, 1<<n) {
    rep(j, m) {
      int t = i | key[j].second;
      dp[t] = min(dp[t], dp[i] + key[j].first);
    }
  }
  if(dp.back() == INF) cout << -1 << endl;
  else cout << dp.back() << endl;

}
