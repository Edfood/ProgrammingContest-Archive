#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll a = 1; a <= n; ++a) {
    for (ll b = 1; b <= n; ++b) {
      ll x = a * b;
      if (x >= n) break;
      ans ++;
    }
  }
  cout << ans << endl;
}