#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

vector<ll> s1;
vector<ll> s2;
vector<vector<int>> g;
vector<bool> used;
vector<int> a;
vector<int> b;

void dfs(int v) {
  if (used[v]) return;
  used[v] = true;
  s1.back() += a[v];
  s2.back() += b[v];
  for (auto u : g[v]) {
    dfs(u);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  a.resize(n);
  b.resize(n);
  g.resize(n);
  used.resize(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  
  rep(i, m) {
    int c, d;
    cin >> c >> d;
    c--; d--;
    g[c].push_back(d);
    g[d].push_back(c);
  }

  rep(i, n) {
    if (used[i]) continue;
    s1.push_back(0);
    s2.push_back(0);
    dfs(i);
  }

  bool ans = true;
  rep(i, s1.size()) {
    if (s1[i] != s2[i]) ans = false;
  }
  cout << (ans ? "Yes" : "No") << endl;
}