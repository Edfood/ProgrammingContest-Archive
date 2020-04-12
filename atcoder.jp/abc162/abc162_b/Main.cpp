#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll i = 1; i <= n; ++i) {
    if(i % 3 && i % 5) ans += i;
  }
  cout << ans << endl;
}