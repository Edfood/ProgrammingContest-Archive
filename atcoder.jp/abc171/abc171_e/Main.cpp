#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

// 10^9 = 2^30;
int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll allxor = 0;
  rep(i, n) allxor = allxor^a[i];
  rep(i, n) {
    ll ans = 0;
    ll cur = a[i];
    ans = allxor ^ a[i];
    cout << ans << endl;
  }

}