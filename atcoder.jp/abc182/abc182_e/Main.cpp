#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int h, w, n, m;
  cin >> h >> w >> n >> m;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    --x, --y;
    a[x][y] = 1;
  }
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    --x, --y;
    a[x][y] = -1;
  }

  vector<vector<bool>> ans(h, vector<bool>(w));

  // left to right
  rep(i, h) {
    bool pre = false;
    rep(j, w) {
      if (a[i][j] == 1) pre = true;
      else if(a[i][j] == -1) pre = false;
      ans[i][j] = ans[i][j] | pre;
    }
  }

  // right to left
  rep(i, h) {
    bool pre = false;
    for (int j = w - 1; j >= 0; --j) {
      if (a[i][j] == 1) pre = true;
      else if (a[i][j] == -1) pre = false;
      ans[i][j] = ans[i][j] | pre;
    }
  }

  // up to down
  rep(j, w) {
    bool pre = false;
    rep(i, h) {
      if (a[i][j] == 1) pre = true;
      else if (a[i][j] == -1) pre = false;
      ans[i][j] = ans[i][j] | pre;
    }
  }

  // down to up
  rep(j, w) {
    bool pre = false;
    for (int i = h - 1; i >= 0; --i) {
      if (a[i][j] == 1) pre = true;
      else if (a[i][j] == -1) pre = false;
      ans[i][j] = ans[i][j] | pre;
    }
  }
  int cnt = 0;

  rep(i, h) rep(j, w) {
    if (ans[i][j]) cnt++;
  }

  cout << cnt << endl;
}