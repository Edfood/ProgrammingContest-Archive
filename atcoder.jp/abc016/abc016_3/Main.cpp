#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

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
  rep(i, n) {
    int ans = 0;
    set<int> f;
    set<int> ff;
    for (int v : graph[i]) {
      f.insert(v);
    }
    for(int v : graph[i]) {
      for(int nv : graph[v]) {
        auto it = f.find(nv);
        if(nv == i || it != f.end()) continue;
        ff.insert(nv);
      }
    }
    cout << ff.size() << endl;
  }
}