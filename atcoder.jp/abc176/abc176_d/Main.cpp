#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};


int main() {
  int h, w;
  cin >> h >> w;
  int ch, cw, dh, dw;
  cin >> ch >> cw >> dh >> dw;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  ch--; cw--; dh--; dw--;

  vector<vector<int>> dist(h, vector<int>(w, INF));

  deque<P> q;
  q.emplace_back(ch, cw);
  dist[ch][cw] = 0;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop_front();

    rep(i, 4) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if (s[nx][ny] == '#') continue;
      if (dist[nx][ny] <= dist[x][y]) continue;
      dist[nx][ny] = dist[x][y];
      q.emplace_front(nx, ny);
    }

    for (int i = -2; i <= 2; ++i) {
      for (int j = -2; j <= 2; ++j) {
        int nx = x + i;
        int ny = y + j;
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if (s[nx][ny] == '#') continue;
        if (dist[nx][ny] <= dist[x][y] + 1) continue;
        dist[nx][ny] = dist[x][y] + 1;
        q.emplace_back(nx, ny);
      }
    }
  }

  int ans = dist[dh][dw];
  if (ans == INF) ans = -1;
  cout << ans << endl;

}