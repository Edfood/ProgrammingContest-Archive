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
  ll ans = 0;
  ll cur = 0;
  rep(i, n) {
    if (a[i] < 0) {
      if (cur + a[i] <= 0) {
        ans += -(a[i] + cur);
        cur = 0;
      } else {
        cur += a[i];
      }
    } else {
      cur += a[i];
    }
  }
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}