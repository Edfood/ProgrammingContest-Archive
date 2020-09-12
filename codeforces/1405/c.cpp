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
  int n, k;
  cin >> n >> k;
  string a;
  cin >> a;

  vector<vector<int>> v(k);
  rep(i, n) {
    v[i % k].push_back(a[i]);
  }
  string t = "";
  rep(i, k) {
    char c = v[i][0];
    rep(j, v[i].size()) {
      if (v[i][j] == '?') continue;
      if (c == '?') c = v[i][j];
      else if (c != v[i][j]) {
        cout << "NO" << endl;
        return;
      }
    }
    t.push_back(c);
  }

  int cnt0 = 0, cnt1 = 0;
  rep(i, t.size()) {
    if (t[i] == '0') cnt0++;
    else if (t[i] == '1') cnt1++;
  }

  string ans = "YES";
  if (cnt0 > k / 2 || cnt1 > k / 2) ans = "NO";
  cout << ans << endl;

}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}