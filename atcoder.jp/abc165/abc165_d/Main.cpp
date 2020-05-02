#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const ll INF = ll(1e14);
ll a, b, n;

ll f(ll x) {
  ll res = (a * x / b) - a * (x / b);
  return res;
}

int main() {
  // a * x が bを超えない最大のx
  cin >> a >> b >> n;
  ll maxv = n + 1;
  ll l = -1, r = maxv;
  while (l + 1 < r) {
    ll x = (l + r) / 2;
    // cout << x << endl;

    if(x >=  b) r = x;
    else l = x; 
  }
  ll ans = f(l);
  cout << ans << endl;
}