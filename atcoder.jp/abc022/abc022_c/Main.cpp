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
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

int MAX_V = 300; // 頂点数
vector<vector<int>> d(MAX_V, vector<int>(MAX_V, INF));
void warshall_floyd() {
  for(int k = 0; k < MAX_V; ++k)
    for(int i = 0; i < MAX_V; ++i)
      for(int j = 0; j < MAX_V; ++j)  d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> start(n);
  rep(i, m) {
    int a, b, l;
    cin >> a >> b >> l;
    --a; --b;
    if(a == 0) {
      start[b] = l;
    } else {
      d[a][b] = l;
      d[b][a] = l;
    }

  }
  rep(i, n) d[i][i] = 0;
  warshall_floyd();

  int ans = INF;
  
  rep(i, n) rep(j, n) {
    if(i == j) continue;
    if(start[i] > 0 && start[j] > 0) {
      ans = min(ans, start[i] + start[j] + d[i][j]);
    }
  }
  if(ans == INF) ans = -1;
  cout << ans << endl;


}