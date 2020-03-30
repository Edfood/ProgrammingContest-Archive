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
  rep(i, n) {
    int t;
    cin >> t;
    if(t == 0) {
      cout << n << endl;
      return 0;
    }
    a[i] = t;
  }

  int r = 0;
  ll cur = 1;
  ll ans = 0;
  rep(l, n) {
    if(l > r) ++r;
    while (r < n && cur * a[r] <= k) {
      cur *= a[r];
      ++r;
    }

    ans = max(r - l, ans);
    if(cur != 1) cur /= a[l];
  }

  cout << ans << endl;

}