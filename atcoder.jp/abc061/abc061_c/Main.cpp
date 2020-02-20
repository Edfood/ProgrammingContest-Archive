#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n, k;
  cin >> n >> k;
  vector<P> a(n);
  ll count = 0;
  rep(i, n) cin >> a[i].first >> a[i].second;
  sort(a.begin(), a.end());
  ll ans;
  rep(i, n){
    k -= a[i].second;
    if(k <= 0) {
      ans = a[i].first;
      break;
    }
  }
  cout << ans << endl;
}