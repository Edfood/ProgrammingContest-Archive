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

int f(ll a, ll b) {
  int res = 0;
  while (a > 0 || b > 0) {
    a /= 10;
    b /= 10;
    ++res;
  }
  return res;
}

int main() {
  ll n;
  cin >> n;
  int ans = INT_MAX;
  for(ll i = 1; i * i <= n; ++i) {
    if(n % i) continue;
    ans = min(ans, f(i, n / i));
  }
  cout << ans << endl;
}