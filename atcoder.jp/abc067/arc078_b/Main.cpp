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
const ll INF = ll(1e18) + 1;

const int MAXN = 100005;
vector<int> to[MAXN];

void dfs(int v, int d, vector<int> &dist) {
  dist[v] = d;
  for (int u : to[v]) {
    if(dist[u] != -1) continue;
    dfs(u, d + 1, dist);
  }
}

int main() {
  int n;
  cin >> n;
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<int> snuke(n, -1), fennec(n, -1);
  dfs(0, 0, fennec);
  dfs(n - 1, 0, snuke);
  int fp = 0;
  int sp = 0;

  rep(i, n) {
    if(fennec[i] > snuke[i]) sp++;
    else fp++;
  }
  
  cout << (sp >= fp ? "Snuke" : "Fennec") << endl;

}