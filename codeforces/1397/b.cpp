#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const ll INF = (ll)1e15;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  
  sort(a.begin(), a.end());
  
  ll ans = INF;
  ll big = INF;
  
  for (ll c = 1; ; ++c) {
    ll cur = 1;
    ll cost = 0;
    rep(i, n) {
      if (cur > big) {
        cout << ans << endl;
        return 0;
      }
      cost += abs(a[i] - cur);

      cur *= c;
    }
    ans = min(ans, cost);
  }

}