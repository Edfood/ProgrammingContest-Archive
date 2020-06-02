#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
const int MAXN = 55;
const int MAXK = 55;
const int MAXW = 10010;

int dp[MAXN][MAXW][MAXK];

int main() {
  int w, n, kk;
  cin >> w >> n >> kk;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  rep(i, n) for (int j = 0; j <= w; ++j) for(int k = 0; k <= kk; ++k) { // k は kkまで回さないと遷移が減って、dp[n][w][k]に全てのmaxが取られない
    int ni = i + 1;
    int nj = j + a[i];
    int nk = k + 1;
    chmax(dp[ni][j][k], dp[i][j][k]);           // 選ばないとき
    if (nj > w) continue;                       // 幅超過
    chmax(dp[ni][nj][nk], dp[i][j][k] + b[i]);  // 選ぶとき
  }

  int ans = 0;
  for(int k = 0; k <= kk; ++k) {
    chmax(ans, dp[n][w][k]);  // k回選べない場合があるので、k回以下の範囲で最大値を探す
  }
  cout << ans << endl;
}