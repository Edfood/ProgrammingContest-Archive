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
  int sum = 0;
  int maxv = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
    chmax(maxv, a[i]);
  }

  string ans = "";
  if (maxv > sum - maxv) {   // 最大値が、最大値を除いた合計値より大きいときは、Tが勝つ
    ans = "T";
  } else {                   // それ以外のときは、勝者が最も大きい値を減らすことで、勝敗を誘導できるので、奇数でT偶数でHLの勝ち
    if (sum % 2 == 1) ans = "T";
    else ans = "HL";
  }

  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}