#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int cost (int i, int s, vector<int> &a) {
  if (s == 0 || s == 2) {     // garlandの範囲外
    if (a[i] == 1) return 1;  // garlandの範囲外に1があったら手数は+1
    else return 0;
  } else {                    // garlandの範囲内
    if (a[i] == 0) return 1;  // garlandの範囲内に0があったら手数は+1
    else return 0;
  }
}

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> a(n);
  rep(i, n) a[i] = s[i] - '0';
  vector<int> cnt(k); // mod k番目の1の個数の合計
  rep(i, n) cnt[i % k] += a[i]; 

  int sum = 0;
  rep(i, n) sum += a[i];
  // 区間dp
  vector<vector<int>> dp(n + k, vector<int>(3, INF));
  rep(i, k)rep(j, 3)  dp[i][j] = 0;

  rep(i, n) rep(j, 3) for (int s = j; s < 3; ++s) {
    chmin(dp[i + k][s], dp[i][j] + cost(i, s, a));
  }
  int ans = INF;
  rep(i, k) rep(j, 3) {
    int moves = sum - cnt[(i + n) % k] + dp[n + i][j];  // cntの添字に注意
    chmin(ans, moves);
  }
  cout << ans << endl;
}


int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}