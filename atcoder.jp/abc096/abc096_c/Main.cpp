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

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  auto check = [&](int x, int y) {
    if(s[x][y] == '.') return true;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    rep(i, 4) {
      int nx = dx[i] + x;
      int ny = dy[i] + y;
      if(0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '#') return true;
    }
    return false;
  };
  bool ans = true;
  rep(i, h)rep(j, w) {
    if(!check(i, j)) {
      ans = false;
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}