#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int MAXV = 100010;


int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  // vector<bool> used(n);
  vector<int> d(n, -1);

  queue<int> q;
  auto push = [&](int v) {
    for (auto u : graph[v]) {
      if (d[u] != -1) continue;;
      d[u] = v;
      q.push(u);
    }
  };
  push(0);
  while(!q.empty()) {
    int v = q.front(); q.pop();
    push(v);
  }

  cout << "Yes" << endl;
  for (int i = 1; i < n; ++i) {
    cout << d[i] + 1 << endl;
  }

}