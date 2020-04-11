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
vector<vector<int>> d;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  d.resize(h, vector<int>(w, -1));

  d[0][0] = 0;
  queue<P> q;
  q.push(P(0, 0));
  while (!q.empty()) {
    P p = q.front(); q.pop();
    rep(i, 4) {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];
      if(0 <= nx && nx < h && 0 <= ny && ny < w && d[nx][ny] == -1 && s[nx][ny] == '.') {
        d[nx][ny] = d[p.first][p.second] + 1;
        q.push(P(nx, ny));
      }
    }
  }
  if(d[h - 1][w - 1] == -1) {
    cout << -1 << endl;
    return 0;
  }
  int cnt = 0;
  rep(i, h)rep(j, w) {
    if(s[i][j] == '.') cnt++;
  }
  int ans = cnt - d[h - 1][w - 1] - 1;
  cout << ans << endl;
}