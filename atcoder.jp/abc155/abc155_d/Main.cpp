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
const ll INF = ll(1e18) + 1;

int main() {
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());

  ll l = -INF, r = INF;
  while (l + 1 < r) {
    ll x = (l + r) / 2;

    bool ok = [&]{
      ll total = 0;
      rep(i, n) {
        ll l = -1; ll r = n;
        while (l + 1 < r) {
          ll middle = (l + r) / 2;
          if(a[i] < 0) {
            if(a[i] * a[middle] < x) r = middle; else l = middle;
          } else {
            if(a[i] * a[middle] < x) l = middle; else r = middle;
          }
        }
        if(a[i] < 0) total += n - r;
        else total += l + 1;
        if(a[i] * a[i] < x) --total;
      }

      total /= 2;
      return total < k;
    }();

    if(ok) l = x; else r = x;
  }

  cout << l << endl;

}