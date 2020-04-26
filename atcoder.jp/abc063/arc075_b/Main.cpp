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

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll diff = a - b;

  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  
  ll l = -1, r = 1000000001;
  while (l + 1 < r) {
    ll middle = (l + r) / 2;

    auto ok = [&] {
      ll base = middle * b;
      ll cnt = middle;
      rep(i, n) {
       cnt -= max(0LL, (h[i] - base + diff - 1) / diff);
      }
      return cnt < 0;
    }();
    ll cnt = 0;

    if(ok) l = middle;
    else r = middle;
  }
  cout << r << endl;
}