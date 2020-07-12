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
  vector<ll> a(n);
  ll sum = 0;
  rep(i, n) {
    cin >> a[i];
    if (i % 2 == 0) sum += a[i];
  }

  vector<ll> t;
  for (int i = 1; i < n; i += 2) {
    t.push_back(a[i] - a[i - 1]);
  }

  ll tmp = 0;
  ll ans = sum;
  rep(i, t.size()) {
    tmp += t[i];
    ans = max(ans, sum + tmp);
    if (tmp < 0) tmp = 0;
  }

  t.resize(0);
  tmp = 0;
  for (int i = 1; i < n; i += 2) {
    if (i == n - 1) continue;
    t.push_back(a[i] - a[i + 1]);
  }
  rep(i, t.size()) {
    tmp += t[i];
    ans = max(ans, sum + tmp);
    if (tmp < 0) tmp = 0;
  }

  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}