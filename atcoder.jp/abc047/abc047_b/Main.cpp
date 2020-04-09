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
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  int l = 0, r = w, u = h, d = 0;
  
  rep(i, n) {
    int x, y, a;
    cin >> x >> y >> a;
    if(a == 1) chmax(l, x);
    else if(a == 2) chmin(r, x);
    else if(a == 3) chmax(d, y);
    else chmin(u, y);
  }
  int ans = max((r - l), 0) * max(0, (u - d));
  cout << ans << endl;

}
