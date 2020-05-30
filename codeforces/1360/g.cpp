#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  if (a * n != b * m) { // a * n == b * n の条件を満たさないと行列が作れない
    cout << "NO" << endl;
    return;
  }

  // 行列を出力
  cout << "YES" << endl;
  int pos = 0;
  rep(i, n) {
    string ans = string(m, '0');
    for (int j = 0; j < a; ++j) {
      ans[pos] = '1';
      pos++;
      pos %= m;
    }
    cout << ans << endl;
  }

}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}