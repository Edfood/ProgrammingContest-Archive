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
ll f(ll x) {
  ll res = 0;
  while(x > 0) {
    res++;
    x /= 10;
  }
  return res;
}

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  auto ans = [&] {
    ll l = 0; ll r = ll(1e9) + 1;
    while (l + 1 < r) {
      ll c = (l + r) / 2;
      ll value = a * c + b * f(c);
      if(value > x) r = c; else l = c;
    }
    return l;
  }();
  cout << ans << endl;
}