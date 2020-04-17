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

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<vector<int>> ans(h, vector<int>(w));
  int num = 1;
  rep(i, h) rep(j, w) {
    if(s[i][j] == '#') {
      ans[i][j] = num;
      num++;
    }
  }
  rep(ri, 2) {
    rep(i, h) {
    int pre = 0;
      rep(j, w) {
        if(ans[i][j] > 0) pre = ans[i][j];
        ans[i][j] = pre;
      }
      reverse(ans[i].begin(), ans[i].end());
    }
  }


  vector<int> pre = ans[0];
  for (int i = 1; i < h; ++i) {
    if(ans[i][0] == 0) {
      ans[i] = pre;
    }
    pre = ans[i];
  }
  pre = ans[h - 1];
  for(int i = h - 2; i >= 0; --i) {
    if(ans[i][0] == 0) ans[i] = pre;
    pre = ans[i];
  }

  rep(i, h) {
    rep(j, w) printf("%d%c", ans[i][j], (j == w - 1 ? '\n' : ' '));
  }

}