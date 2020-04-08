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
struct edge {
  int to, cost;
};
vector<vector<edge>> graph;
vector<ll> dist;

void dfs(int v, ll d=0, int p=-1) {
  dist[v] = d;
  for(edge u : graph[v]) {
    if(u.to == p) continue;
    dfs(u.to, d + u.cost, v);
  }
}
int main() {
  int n;
  cin >> n;
  graph.resize(n);
  dist.resize(n);
  rep(i, n - 1) {
    int a, b, c;
    cin >> a >> b >> c;
    --a; --b;
    graph[a].push_back((edge){b, c});
    graph[b].push_back((edge){a, c});
  }
  int q, k;
  cin >> q >> k;
  --k;
  dfs(k);
  vector<ll> ans;

  rep(i, q) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    ans.push_back(dist[x] + dist[y]);
  }
  
  rep(i, q) cout << ans[i] << endl;
}
