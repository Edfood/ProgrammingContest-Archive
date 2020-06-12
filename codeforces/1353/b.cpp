#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());
  for (int i = 0; i < n && i < k; ++i) {
    if (a[i] < b[i]) a[i] = b[i];
  }
  int ans = 0;
  rep(i, n) ans += a[i];
  cout << ans << endl;
}

int main() {
  
  int t;
  cin >> t;
  rep(i, t) solve();
  
}