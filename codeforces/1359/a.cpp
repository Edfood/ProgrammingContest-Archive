#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  int maxv = min(m, n / k);
  m -= maxv;

  int ans = maxv - (m + k - 2) / (k - 1);
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}