#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const int mod = 1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  vector<P> p(n);
  rep(i, n) cin >> p[i].first >> p[i].second;
  sort(p.begin(), p.end());
  ll ans = 0;
  rep(i, n) {
    if(m <= 0) break;
    ll a = p[i].first, b = p[i].second;
    if(m <= p[i].second) ans += m * p[i].first;
    else ans += p[i].second * p[i].first;
    m -= p[i].second;
  }
  cout << ans << endl;
}