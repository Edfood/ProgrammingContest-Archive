#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];

  vector<int> sum(n + 1);
  UnionFind uf(n);

  rep(i, n) {
    int l = lower_bound(x.begin(), x.end(), x[i] + a) - x.begin();
    int r = upper_bound(x.begin(), x.end(), x[i] + b) - x.begin() - 1;
    if (r < l) continue;
    uf.unite(i, l);
    sum[l]++;
    sum[r]--;
  }

  rep(i, n) sum[i + 1] += sum[i];
  rep(i, n) if (sum[i] > 0) uf.unite(i, i + 1);
  rep(i, n) cout << uf.size(i) << endl;
}