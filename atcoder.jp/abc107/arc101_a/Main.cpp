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

int main(){
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  
  rep(i, n) {
    cin >> a[i];
  }
  ll ans = INF;
  for (int i = 0; i + k - 1 < n; ++i) {
    ll l = a[i];
    ll r = a[i + k - 1];
    ll d1 = abs(l) + abs(l - r);
    ll d2 = abs(r) + abs(r - l);
    ans = min(ans, min(d1, d2));
  }
  cout << ans << endl;
  
}
