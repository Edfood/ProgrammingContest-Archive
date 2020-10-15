#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int main() {
  int h, w;
  cin >> h >> w;
  int sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  sx--; sy--; gx--; gy--;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  queue<P> q;
  q.push(P(sx, sy));

  vector<vector<bool>> ok(h, vector<bool>(w));
  ok[sx][sy] = true;
  while (!q.empty()) {
    auto p = q.front(); q.pop();
    int x = p.first, y = p.second;
    int c = s[x][y] - '0';
    rep(i, 4) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w || ok[nx][ny]) continue;
      int nc = s[nx][ny] - '0';
      int diff = abs(c - nc);
      if (diff >= 2) continue;
      ok[nx][ny] = true;
      q.push(P(nx, ny));
    }

    rep(i, 4) {
      int nx = x + dx[i] * 2;
      int ny = y + dy[i] * 2;
      if (nx < 0 || nx >= h || ny < 0 || ny >= w || ok[nx][ny]) continue;
      int nc = s[nx][ny] - '0';
      int diff = abs(c - nc);
      int temae = s[x + dx[i]][y + dy[i]] - '0';
      if (diff > 0 || temae >= nc) continue;
      ok[nx][ny] = true;
      q.push(P(nx, ny));
    }
  }

  string ans = "NO";
  if (ok[gx][gy]) ans = "YES";
  cout << ans << endl;
}