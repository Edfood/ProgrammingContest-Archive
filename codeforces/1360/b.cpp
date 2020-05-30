#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = INF;
  for (int i = 0; i < n - 1; ++i) {
    ans = min(a[i + 1] - a[i], ans);
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}