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
  int x;
  cin >> x;
  int ans = 1;
  for (int i = 2; i * i <= x; ++i) {
    for(int j = 2; ; ++j) {
      int p = pow(i, j);
      if(p > x) break;
      ans = max(ans, p);
    }
  }
  cout << ans << endl;
}
