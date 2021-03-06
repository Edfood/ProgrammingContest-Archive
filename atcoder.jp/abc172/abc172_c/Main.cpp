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


int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  ll t = 0;
  int ans = 0;
  rep(i, m) t += b[i];

  int j = m;
  rep(i, n + 1) {
    while (j >= 0 && t > k) {
      --j;
      t -= b[j];
    }

    if (t > k) continue;
    ans = max(ans, j + i);
    if (i == n) break;
    t += a[i];
  }

  cout << ans << endl;
}