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
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  bool ans = true;
  for (int i = n - 2; i >= 0; --i) {
    for (int j = n - 2; j >= 0; --j) {
      if (s[i][j] != '1') continue;
      if (s[i][j + 1] != '1' && s[i + 1][j] != '1') ans = false;
    }
  }
  if (ans) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  int t;
  cin >> t;

  rep(i, t) solve();
}t