#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int dp[310];


int main() {
  int n;
  cin >> n;
  vector<int> ng(3);
  rep(i, 3) cin >> ng[i];
  // rep(i, 3) if(ng[i] == n || ng[i] == 0) {
  //   cout << "NO" << endl;
  //   return 0;
  // }
  rep(i, n + 1) dp[i] = INF;
  dp[0] = 0;
  for (int i = 0; i <= n; ++i) {
    rep(j, 3) {
      bool ok = true;
      rep(k, 3) {
        if(ng[k] == i + j + 1) ok = false;
      }
      if(ok) dp[i + j + 1] = min(dp[i + j + 1], dp[i] + 1);
    }
  }
  if(dp[n] > 100) cout << "NO" << endl;
  else cout << "YES" << endl;
}