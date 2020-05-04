#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int MAXV = 100100;
vector<int> to[MAXV], group(MAXV, -1);

void dfs(int v, int g) {
  if (group[v] != -1) return;
  group[v] = g;
  for (int u : to[v]) {
    dfs(u, g);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  int ans = 0;
  rep(i, n) {
    if (group[i] == -1) {
      ans++;
      dfs(i, ans);
    }
  }
  cout << ans - 1 << endl;
}