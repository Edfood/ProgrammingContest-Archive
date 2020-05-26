#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int MAXN = 100100;
int n, m, d;

int dp[42][MAXN];

int main() {
  cin >> n >> m >> d;
  vector<int> a(m);
  rep(i, m) {
    cin >> a[i];
    a[i]--;
  };
  rep(i, n) dp[0][i] = i;
  for (int i = m - 1; i >= 0; --i) swap(dp[0][a[i]], dp[0][a[i] + 1]);

  for(int i = 0; i <= 30; ++i) {
    rep(j, n) {
      dp[i + 1][j] = dp[i][dp[i][j]];
    }
  }

  rep(i, n) {
    int cur = i;
    int td = d;
    int bit = 0;

    while (td > 0) {
      if (td & 1) {
        cur = dp[bit][cur];
      }
      td /= 2;
      bit++;
    }
    cout << cur + 1 << endl;
  }

}