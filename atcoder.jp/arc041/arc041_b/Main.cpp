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
const int INF = 1001001001;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h), ans(h);
  rep(i, h) cin >> a[i];
  rep(i, h) ans[i] = string(w, '0');

  for (int i = 1; i < h - 1; ++i) {
    for(int j = 1; j < w - 1; ++j) {
      int minv = INF;
      rep(k, 4) {
        int ni = dx[k] + i;
        int nj = dy[k] + j;
        int c = a[ni][nj] - '0';
        chmin(minv, c);
      }
      rep(k, 4) {
        int ni = dx[k] + i;
        int nj = dy[k] + j;
        a[ni][nj] = a[ni][nj] - minv;
      }
      ans[i][j] = minv + '0';
    }
  }
  rep(i, h) cout << ans[i] << endl;
}