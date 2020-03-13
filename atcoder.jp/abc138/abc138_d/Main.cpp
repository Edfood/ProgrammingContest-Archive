#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

vector<vector<int>> graph;
vector<int> p;
vector<int> ans;
void dfs(int pre, int cur, int cnt) {
  cnt += p[cur];
  ans[cur] = cnt;
  for(int x : graph[cur]) {
    if(x == pre) continue;
    dfs(cur, x, cnt);
  }
}

int main(){
  int n, q;
  cin >> n >> q;
  ans.resize(n);
  graph.resize(n);
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  p.resize(n);
  rep(i, q) {
    int a, b;
    cin >> a >>b;
    --a;
    p[a] += b;
  }
  dfs(-1, 0, 0);

  rep(i, n) printf("%d%c", ans[i], i == n-1 ? '\n' : ' ');
}