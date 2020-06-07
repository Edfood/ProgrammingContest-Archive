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
  int h, c, t;
  cin >> h >> c >> t;
  if (t >= h) {
    cout << 1 << endl;
    return;
  }
  if (t <= (h + c) / 2) {
    cout << 2 << endl;
    return;
  }

  // 操作回数kが偶数の場合、温度は必ず(h + c) / 2となるので、以下の操作は必ず奇数
  // 操作回数kが奇数の場合、温度は単調減少なので、２分探索で求められる
  double cur = 0;
  int l = -1, r = 1000010;
  auto calculate = [&](ll k) { // overflowのためにlong longで入力
    return ((double)(k + 1) * h + c * k) / (2 * k + 1); // k回操作を行うときの温度
  };

  while (l + 1 < r) {
    int k = (l + r) / 2;
    double curt = calculate(k);
    if (curt >= t) {
      l = k;
    } else {
      r = k;
    }
  }
  
  double vall = abs(t - calculate(l));
  double valr = abs(t - calculate(r));
  int ans = 0;
  if (vall <= valr) ans = l;
  else ans = r;
  ans = ans * 2 + 1;
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}