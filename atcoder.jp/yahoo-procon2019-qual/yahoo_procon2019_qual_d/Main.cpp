#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const ll INF = 1LL<<60;

ll dp[500005][5];

ll cost(int i, int s, const vector<ll> &a) {
  if (s == 0 || s == 4) return a[i]; // snukeくんが散歩しない区間 (通る回数が0)
  if (s == 1 || s == 3) {            // スタートとゴールの範囲外の区間 (通る回数が偶数)
    if (a[i] == 0) return 2;
    else return a[i] % 2;
  }
  if (s == 2) {                      // スタートとゴールの間の区間 (通る回数が奇数)
    if (a[i] % 2 == 0) return 1;
    else return 0;
  }
  puts("state is invalid.");
  exit(0);
}

int main() {
  int l;
  cin >> l;
  vector<ll> a(l);
  rep(i, l) cin >> a[i];

  rep(i, 500005) rep(j, 5) dp[i][j] = INF;
  dp[0][0] = 0;

  rep(i, l) rep(j, 5) for (int k = j; k < 5; ++k) {
    chmin(dp[i + 1][k], dp[i][j] + cost(i, k, a));
  }
  
  ll ans = INF;
  rep(i, 5) chmin(ans, dp[l][i]);
  cout << ans << endl;
}