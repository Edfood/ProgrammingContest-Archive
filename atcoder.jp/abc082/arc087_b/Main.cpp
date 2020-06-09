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
#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const double PI = 3.1415926535897932384626433832795;
const int mod = 1000000007;
const int INF = 1001001001;
const int MAXN = 8000;
const int MAXS = 16100;
// vector<vector<bool>> dpx(MAXN, vector<bool>(MAXS));
// vector<vector<bool>> dpy(MAXN, vector<bool>(MAXS));

bool dpx[MAXN][MAXS];
bool dpy[MAXN][MAXS];

void calculate(bool (&dp)[MAXN][MAXS], vector<int> &res) {
  int n = res.size();
  int m = MAXS;
  rep(i, n) rep(j, m) {
    int dist = res[i];
    if (dp[i][j] == true) {
      if (j + dist < m) dp[i + 1][j + dist] = true;
      if (j - dist >= 0) dp[i + 1][j - dist] = true;
    }
  }
  return;
}

int main() {
  string s;
  cin >> s;
  int x, y;
  cin >> x >> y;

  const int n = s.size();
  const int center = MAXS / 2;
  int curx = center;
  int i;
  for (i = 0; i < n; ++i) {
    if (s[i] == 'T') break;
    curx++;
  }
  dpx[0][curx] = true;
  dpy[0][center] = true;

  vector<int> resx, resy;
  bool direction = false;
  resx.push_back(0);

  for(; i < n; ++i) {
    if (s[i] == 'T') {
      direction = !direction;
      if(direction) resy.push_back(0);
      else resx.push_back(0);
    } else {
      if (direction) resy.back()++;
      else resx.back()++;
    }
  }
  // rep(i, MAXS) {
  //   if(dpx[0][i]) cout << i - center << endl;
  // }

  calculate(dpx, resx);
  calculate(dpy, resy);

  bool ans = false;
  x = center + x;
  y = center + y;
  if (dpx[resx.size()][x] == true && dpy[resy.size()][y] == true) ans = true;
  else ans = false;

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

}