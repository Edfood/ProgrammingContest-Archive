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
#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const double PI = 3.1415926535897932384626433832795;
const int mod = 1000000007;
const int INF = 1001001001;
const int MAXH = 10010;
const int MAXN = 1010;
int dp[MAXN][MAXH];

int main() {
  ll n, h;
  cin >> n >> h;
  ll a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  ll ans = LLONG_MAX;
  for (ll i = 0; i <= n; ++i) {
    ll hangly = e * (n - i);
    ll remain = hangly - h - b * i;

    ll j = 0;
    if (remain > 0) {
      j = max(0LL, (e * (n - i) - h - b * i) / (d + e) + 1);
    }

    ll cost = a * i + c * j;
    chmin(ans, cost);
  }
  cout << ans << endl;
}

