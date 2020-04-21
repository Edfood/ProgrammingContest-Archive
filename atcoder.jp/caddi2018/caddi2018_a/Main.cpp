#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


int main() {
  ll n, p;
  cin >> n >> p;
  if(n == 1) {
    cout << p << endl;
    return 0;
  }
  ll ans = 1;
  for (ll i = 2; i * i <= p; ++i) {
    if (p % i) continue;
    ll cnt = 0;
    while (p % i == 0) {
      cnt++;
      p /= i;
    }
    ans *= pow(i, cnt / n);
  }
  cout << ans << endl;
}