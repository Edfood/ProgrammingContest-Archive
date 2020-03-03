#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

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

ll comb(ll n){
  return n * (n - 1) / 2;
}

int main(){
  int n, m;
  cin >> n >> m;
  vector<ll> a(m), b(m);
  rep(i, m){
    int s, t;
    cin >> s >> t;
    --s; --t;
    a[i] = s;
    b[i] = t;
  }
  UnionFind uf(n);
  vector<ll> ans;
  ll cur = comb(n);
  for (int i = m - 1; i >= 0; --i) {
    ans.push_back(cur);
    if (uf.same(a[i], b[i])) {
      continue;
    }
    cur += comb(uf.size(a[i])) + comb(uf.size(b[i]));
    bool ok = uf.unite(a[i], b[i]);
    cur -= comb(uf.size(a[i]));
  }
  reverse(ans.begin(), ans.end());

  rep(i, m) cout << ans[i] << endl;

}