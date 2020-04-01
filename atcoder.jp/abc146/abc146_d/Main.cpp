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
typedef pair<ll,int> p;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;
struct edge {
  int to, id;
};
vector<vector<edge>> graph;
vector<int> ans;

void dfs(int vertex, int pre=-1, int c=-1) {
  int nc = 1;
  for (auto v : graph[vertex]) {
    if(v.to == pre) continue;
    if(c == nc) ++nc;
    ans[v.id] = nc;
    dfs(v.to, vertex, nc);
    nc++;
  }
}

int main(){
  int n;
  cin >> n;
  graph.resize(n);
  ans.resize(n);
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    graph[a].push_back((edge){b, i});
    graph[b].push_back((edge){a, i});
  }
  dfs(0);
  int maxv = 0;
  rep(i, n - 1) maxv = max(maxv, ans[i]);
  cout << maxv << endl;
  rep(i, n - 1) {
    cout << ans[i] << endl;
  }

}