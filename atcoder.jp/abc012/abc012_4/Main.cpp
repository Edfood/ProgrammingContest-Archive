#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
const int MAX_V = 300; // 頂点数
vector<vector<int>> d(MAX_V, vector<int>(MAX_V, INF));
void warshall_floyd() {
  for(int k = 0; k < MAX_V; ++k)
    for(int i = 0; i < MAX_V; ++i)
      for(int j = 0; j < MAX_V; ++j)  d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main() {
  int n, m;
  cin >> n >> m;
  rep(i, m) {
    int a, b, t;
    cin >> a >> b >> t;
    --a; --b;
    d[a][b] = t;
    d[b][a] = t;
  }
  rep(i, n) d[i][i] = 0;
  warshall_floyd();
  int ans = INF;

  rep(i, n) {
    int maxd = 0;
    rep(j, n) {
      if(d[i][j] != INF) chmax(maxd, d[i][j]);
    }
    chmin(ans, maxd);
  }
  cout << ans << endl;
}