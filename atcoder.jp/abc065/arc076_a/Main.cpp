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
  int n, m;
  cin >> n >> m;
  ll ans = 1;
  if(abs(n - m) >= 2) {
    cout << 0 << endl;
    return 0;
  }
  for(int i = 1; i <= n; ++i) (ans *= i) %= mod;
  for(int i = 1; i <= m; ++i) (ans *= i) %= mod;
  if(n == m) (ans *= 2) %= mod;
  cout << ans << endl;
}