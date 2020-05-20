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

int main() {
  int tt;
  cin >> tt;
  rep(ti, tt) {
    ll x, y;
    cin >> x >> y;
    ll a, b;
    cin >> a >> b;

    if (abs(x) > abs(y)) swap(x, y);

    ll ans1 = a * abs(x) + a * abs(y);
    ll ans2 = abs(x) * b;
    if (x < 0) y += x;
    else y -= x;
    ans2 += abs(y) * a;
    ll ans = min(ans1, ans2);
    cout << ans << endl;
  }

}