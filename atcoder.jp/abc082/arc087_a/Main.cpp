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
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  map<ll, ll> cnt;
  rep(i, n) {
    cnt[a[i]]++;
  }
  ll ans = 0;
  for (auto it = cnt.begin(); it != cnt.end(); ++it) {
    ll key = it->first;
    ll value = it->second;
    if(value >= key) ans += value - key;
    else ans += value;
  }
  cout << ans << endl;
}