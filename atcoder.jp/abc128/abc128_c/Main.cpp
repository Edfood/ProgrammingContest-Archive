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
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  int ans = 0;
  vector<int> k(m);
  vector<vector<int>> s(m);
  rep(i, m) {
    cin >> k[i];
    rep(j, k[i]) {
      int ss;
      cin >> ss;
      --ss;
      s[i].push_back(ss);
    }
  }
  vector<int> p(m);
  rep(i, m) cin >> p[i];

  rep(i, 1<<n) {
    vector<int> t(m);
    rep(j, m) {
      rep(l, k[j]) {
        int ns = s[j][l];
        if(i>>ns&1) t[j]++;
      }
    }
    bool ok = true;
    rep(j, m) {
      if(!(t[j] % 2 == p[j])) ok = false;
    }
    if(ok) ans++;
  }
  cout << ans << endl;
}