#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

vector<ll> divisor(ll n) {
  vector<ll> res;
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i) continue;
    res.push_back(i);
    if (i * i != n) res.push_back(n / i);
  }
  if (n != 1) res.push_back(n);
  return res;
}

void solve() {
  int n, k;
  cin >> n >> k;
  auto div = divisor(n);
  int ans = 1;
  for (int d : div) {
    if (d <= k) chmax(ans, d);
  }
  ans = n / ans;
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}