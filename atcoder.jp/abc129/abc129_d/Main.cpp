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
typedef pair<ll,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  vector<vector<int>> cnt(h, vector<int>(w));
  rep(i, h) {
    rep(j, w) {
      int r = j;
      
      while(r < w && s[i][r] != '#') {
        ++r;
      }
      int diff = r - j;
      while (j < r) {
        cnt[i][j] = diff;
        ++j;
      }
    }
  }
  
  rep(j, w) {
    rep(i, h) {
      int d = i;
      while (d < h && s[d][j] != '#') {
        ++d;
      }
      int diff = d - i;
      while (i < d) {
        cnt[i][j] += diff;
        ++i;
      }
    }
  }

  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      ans = max(ans, cnt[i][j]);
    }
  }
  cout << ans - 1 << endl;
}