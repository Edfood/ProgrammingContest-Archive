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

int MAX_V = 410; // 頂点数
vector<vector<int>> d(MAX_V, vector<int>(MAX_V, INF));
void warshall_floyd() {
  for(int k = 0; k < MAX_V; ++k)
    for(int i = 0; i < MAX_V; ++i)
      for(int j = 0; j < MAX_V; ++j)  d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) {
    cin >> s[i];
  }
  rep(i, h * w) d[i][i] = 0;
  rep(i,h)rep(j,w) {
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    if(s[i][j] == '#') continue;
    rep(k, 4) {
      int nx = dx[k] + i;
      int ny = dy[k] + j;
      if(0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '.') {
        d[nx*w + ny][i*w + j] = 1;
        d[i*w + j][nx*w + ny] = 1;
      }
    }
  }
  warshall_floyd();
  int ans = 0;
  rep(i, h * w)rep(j, h * w) {
    if(d[i][j] != INF) chmax(ans, d[i][j]);
  }
  cout << ans << endl;

}