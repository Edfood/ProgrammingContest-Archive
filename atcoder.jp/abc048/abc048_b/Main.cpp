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
#define chmin(x,y) y=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  --a;
  ll ans;
  if(a == -1) ans = b / x + 1;
  else ans = b / x - a / x;
  cout << ans << endl;
}
