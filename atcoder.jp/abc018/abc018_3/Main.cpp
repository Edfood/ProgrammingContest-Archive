#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  vector<vector<int>> up(h, vector<int>(w)), down(h, vector<int>(w));
  rep(j, w) {
    int cnt = 0;
    rep(i, h) {
      if(s[i][j] == 'x') cnt = 0;
      else cnt++;
      up[i][j] = cnt;
    }
  }
  rep(j, w) {
    int cnt = 0;
    for (int i = h - 1; i >= 0; --i) {
      if(s[i][j] == 'x') cnt = 0;
      else cnt++;
      down[i][j] = cnt;
    }
  }
  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      auto ok = [&](int x, int y) {
        for (int i = 0; i < k; i++) {
          int left = y - i;
          int right = y + i;
          if(left < 0 || right >= w) return false;
          int need = k - i;
          if(up[x][left] < need || down[x][left] < need || up[x][right] < need || down[x][right] < need) return false;
        }
        return true;
      };
      if(ok(i, j)) ans++;
    }
  }
  cout << ans << endl;
  
}