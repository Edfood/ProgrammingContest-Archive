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
  int n, x, y;
  cin >> n >> x >> y;
  --x; --y;
  vector<int> ans(n + 1);
  rep(i, n) {
    queue<int> q;
    vector<int> dist(n, INF);
    auto push = [&] (int v, int d) {
      if(dist[v] != INF) return;
      dist[v] = d;
      q.push(v);
    };
    push(i, 0);
    while (!q.empty()) {
      
      int v = q.front(); q.pop();
      if(v - 1 >= 0) push(v - 1, dist[v] + 1);
      if(v + 1 < n) push(v + 1, dist[v] + 1);
      if(v == x) push(y, dist[v] + 1);
      if(v == y) push(x, dist[v] + 1);
    }
    rep(i, n) ans[dist[i]]++;
  }

  for(int i = 1; i <= n - 1; ++i) {
    cout << ans[i] / 2 << endl;
  }

}