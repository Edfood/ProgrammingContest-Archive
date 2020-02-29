#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  ll cur = 0;
  rep(i, k) cur += a[i];
  ans = cur;
  for(int i = k; i < n; ++i){
    cur -= a[i - k];
    cur += a[i];
    ans += cur;
  }
  cout << ans << endl;
}