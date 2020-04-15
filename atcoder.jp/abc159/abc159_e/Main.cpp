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
  int h, w, K;
  cin >> h >> w >> K;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  
  int ans = INF;

  rep(div, 1<<(h - 1)) {
    vector<int> id(h);
    int g = 0;
    rep(i, h) {
      id[i] = g;
      if(div>>i&1) ++g;
    }
    ++g;

    vector<vector<int>> c(g, vector<int>(w));
    rep(i, h)rep(j, w) c[id[i]][j] += s[i][j] - '0';
    int cnt = g - 1;
    vector<int> now(g);
    auto add = [&](int j) {
      rep(i, g) now[i] += c[i][j];
      rep(i, g) if(now[i] > K) return false;
      return true;
    };
    
    rep(j, w) {
      if(!add(j)) {
        cnt++;
        now = vector<int>(g);
        if(!add(j)) {
          cnt = INF;
          break;
        }
      }
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}