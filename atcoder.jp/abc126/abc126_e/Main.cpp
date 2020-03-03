#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

struct UnionFind {
  vector<int> d;
  UnionFind(int n = 0): d(n, - 1) {}
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

int main(){
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  rep(i, m){
    int x, y, z;
    cin >> x >> y >> z;
    --x; --y;
    uf.unite(x, y);
  }
  int ans = 0;
  vector<int> used(n, false);
  rep(i, n){
    int x = uf.find(i);
    if(!used[x]){
      ans++;
      used[x] = true;
    }
  }
  cout << ans << endl;

}