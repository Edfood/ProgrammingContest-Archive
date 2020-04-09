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
typedef pair<ll,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<P> v(m);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    v[i] = P(b, a);
  }
  sort(v.begin(), v.end());
  int pre = -1;
  int ans = 0;
  rep(i, m) {
    if(pre <= v[i].second) {
      ans++;
      pre = v[i].first;
    }
  }
  cout << ans << endl;
}
