#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> cnt(n + 1);
  rep(i, n) cnt[a[i]]++;

  int ans = 0;
  for (int l = 0; l < n; ++l) {
    int cur = a[l];
    for (int r = l + 1; r < n; ++r) {
      cur += a[r];
      if (cur <= n) { // seiyaku wo riyou sita if-statement (juuyou)
        ans += cnt[cur];
        cnt[cur] = 0;
      }

    }
  }
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}