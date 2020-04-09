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
  vector<int> p(m), y(m);
  vector<vector<int>> v(100100);
  rep(i, m) {
    cin >> p[i] >> y[i];
    v[p[i]].push_back(y[i]);
  }
  rep(i, n + 1) sort(v[i].begin(), v[i].end());
  rep(i, m) {
    int pref = p[i];
    int year = y[i];
    int rank = lower_bound(v[pref].begin(), v[pref].end(), year) - v[pref].begin() + 1;
    printf("%06d%06d\n", pref, rank);
  }
}
