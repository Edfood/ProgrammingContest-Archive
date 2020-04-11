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
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

struct UnionFind {
  vector<int> d;
  UnionFind(int n = 0): d(n, -1) {}
  int find(int x) {
    if(d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if(x == y) return false;
    if(d[x] > d[y]) swap(x, y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) {return -d[find(x)];}
};

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  UnionFind uf(n);
  vector<vector<int>> to(n);
  vector<int> deg(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    deg[a]++;
    deg[b]++;
    uf.unite(a, b);
  }
  rep(i, k) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  rep(i, n) {
    int ans = uf.size(i) - 1 - deg[i];
    for (int v : to[i]) {
      if(uf.same(i, v)) --ans;
    }
    printf("%d%c", ans, i==n-1?'\n':' ');
  }
}