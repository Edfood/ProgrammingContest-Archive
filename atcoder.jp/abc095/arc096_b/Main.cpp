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
typedef pair<ll,int> p;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  ll n, c;
  cin >> n >> c;
  vector<ll> x(n), v(n);
  rep(i, n) {
    cin >> x[i] >> v[i];
  }
  vector<ll> s1(n), s2(n);
  ll cur = 0;
  ll maxv = 0;
  rep(i, n) {
    cur += v[i];
    maxv = max(maxv, cur - x[i]);
    s1[i] = max(0LL, maxv);
  }
  cur = 0;
  maxv = 0;
  for (int i = n - 1; i >= 0; --i) {
    cur += v[i];
    maxv = max(maxv, cur - (c - x[i])); 
    s2[i] = max(maxv, 0LL);
  }

  ll ans = 0;
  rep(i, n) {
    ll xx = s1[i];
    ll yy = 0;
    if(i != n - 1) yy = max(0LL, s2[i + 1] - x[i]);
    ans = max(ans, xx + yy);
  }

  for(int i = n - 1; i >= 0; --i) {
    ll xx = s2[i];
    ll yy = 0;
    if(i != 0) yy = max(0LL, s1[i - 1] - (c - x[i]));
    ans = max(ans, xx + yy);
  }
  cout << ans << endl;

}