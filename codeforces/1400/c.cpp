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
  string s;
  cin >> s;
  int x;
  cin >> x;
  int n = s.length();

  string ans(n, '1');
  
  rep(i, n) {
    if (s[i] == '0') {
      if (i - x >= 0) ans[i - x] = '0';
      if (i + x <  n) ans[i + x] = '0';
    }
  }

  rep(i, n) {
    bool one = false;
    one = one || (i - x >= 0 && ans[i - x] == '1');
    one = one || (i + x < n && ans[i + x] == '1');
    if (s[i] != one + '0') {
      cout << -1 << endl;
      return;
    }
  }

  cout << ans << endl;

}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}