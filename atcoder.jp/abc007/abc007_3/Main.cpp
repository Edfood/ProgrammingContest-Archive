#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int main() {
  int h, w;
  cin >> h >> w;
  int sx, sy;
  cin >> sx >> sy;
  int gx, gy;
  cin >> gx >> gy;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<vector<int>> d(h, vector<int>(w));
  --sx; --sy; --gx; --gy;
  queue<P> q;
  q.push(P(sx, sy));
  int dist = 0;

  while (!q.empty()) {
    auto push = [&] (int x, int y){
      rep(i, 4) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '.' && d[nx][ny] == 0) {
          d[nx][ny] = d[x][y] + 1;
          q.push(P(nx, ny));
        }
      }
    };
    auto p = q.front(); q.pop();
    int x = p.first, y = p.second;
    push(x, y);
  }

  cout << d[gx][gy] << endl;
  
  
}