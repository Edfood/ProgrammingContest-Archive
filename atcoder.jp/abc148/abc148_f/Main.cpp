#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int MAXN = 100000;
vector<int> to[MAXN];

void dfs(int v, int pre, int dist, vector<int> &d) {
  d[v] = dist;
  for (int u : to[v]) {
    if(u == pre) continue;
    dfs(u, v, dist + 1, d);
  }
}

int main() {
  int n, u, v;
  cin >> n >> u >> v;
  --u; --v;
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<int> du(MAXN), dv(MAXN);
  dfs(v, -1, 0, dv);
  dfs(u, -1, 0, du);
  int ans = 0;
  rep(i, n) {
    if(du[i] < dv[i]) ans = max(ans, dv[i]);
  }
  cout << ans - 1 << endl;
}