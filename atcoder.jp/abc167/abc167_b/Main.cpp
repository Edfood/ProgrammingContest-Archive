#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  ll ans = a;

  if(k <= a) {
    ans = k;
  } else if(k <= a + b) ans = a;
  else {
    ans = a - (k - (a + b));
  }
  cout << ans << endl;

}