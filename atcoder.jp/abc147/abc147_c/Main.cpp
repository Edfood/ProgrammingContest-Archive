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

int f(int x) {
  
  int res = 0;
  while(x > 0) {
    res += x & 1;
    x >>= 1;
  }
  return res;
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<vector<P>> xy(n);
  rep(i, n) {
    cin >> a[i];
    rep(j, a[i]){
      int x, y;
      cin >> x >> y;
      --x;
      xy[i].push_back(P(x, y));
    }
  }
  int ans = 0;
  rep(bit, 1<<n) {
    
    bool ok = true;
    rep(i, n) {
      if(!(bit>>i&1)) continue;

      rep(j, a[i]) {
        
        int x = xy[i][j].first;
        int y = xy[i][j].second;
        int t = bit>>x&1;
        if(t != y) ok = false;
      }
    }
    int cnt = f(bit);
    if(ok) ans = max(ans, cnt);
  }
  cout << ans << endl;
}