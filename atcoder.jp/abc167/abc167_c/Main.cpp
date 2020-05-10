#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n ,m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  rep(i, n) {
    cin >> c[i];
    rep(j, m) cin >> a[i][j];
  }
  int ans = INF;

  for (int i = 0; i < (1<<n); ++i) {
    vector<int> skill(m);
    int money = 0;
    rep(j, n) {
      if (((i>>j)&1) == 0) continue;
      money += c[j];
      rep(k, m) {
        skill[k] += a[j][k];
      }
    }

    bool ok = true;
    rep(j, m) {
      if (skill[j] < x) ok = false;
    }
    if(ok) chmin(ans, money);
  }

  if (ans == INF) ans = -1;
  cout << ans << endl;
}