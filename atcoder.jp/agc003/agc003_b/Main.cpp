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
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n + 1);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  rep(i, n) {
    ans += a[i] / 2;
    a[i] %= 2;
    if(a[i] && a[i + 1]) {
      ans++;
      a[i + 1]--;
    }
  }
  cout << ans << endl;

}