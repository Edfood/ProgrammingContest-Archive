#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sell(n);
  vector<int> mx(n), mn(n, INT_MAX);
  int pre = 0;
  for (int i = n - 1; i >= 0; --i) {
    mx[i] = max(pre, a[i]);
    pre = mx[i];
  }
  pre = INT_MAX;
  rep(i, n) {
    mn[i] = min(pre, a[i]);
  }
  ll maxv = 0;
  rep(i, n) {
    sell[i] = mx[i] - mn[i];
    maxv = max(sell[i], maxv);
  }
  int ans = 0;
  rep(i, n) {
    if(sell[i] == maxv) ++ans;
  }
  cout << ans << endl;
}