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
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);
  ll ans;

  if ((x / d) <= k) {
    k -= x / d;
    x -= d * (x / d);
    if (k % 2 == 1) {
      x = min(abs(x - d), abs(x + d));
    }
    ans = abs(x);
  } else {
    ans = abs(x - k * d);
  }

  cout << ans << endl;
}