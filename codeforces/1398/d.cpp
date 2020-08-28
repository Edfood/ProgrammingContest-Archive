#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

ll dp[210][210][210];

int main() {
  int R, G, B;
  cin >> R >> G >> B;
  vector<ll> r(R), g(G), b(B);
  rep(i, R) cin >> r[i];
  rep(i, G) cin >> g[i];
  rep(i, B) cin >> b[i];
  ll ans = 0;
  sort(r.rbegin(), r.rend());
  sort(g.rbegin(), g.rend());
  sort(b.rbegin(), b.rend());

  rep(i, R + 1) rep(j, G + 1) rep(k, B + 1) {
    ll v = dp[i][j][k];
    // 選ぶ
    if (i < R && j < G) chmax(dp[i + 1][j + 1][k], v + r[i] * g[j]);
    if (j < G && k < B) chmax(dp[i][j + 1][k + 1], v + g[j] * b[k]);
    if (i < R && k < B) chmax(dp[i + 1][j][k + 1], v + r[i] * b[k]);

    ans = max(ans, v);
  }
  cout << ans << endl;
}