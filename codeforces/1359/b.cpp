#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
int costx, costy;
int calculate(int x) {
  if (2 * costx <= costy) {
    return x * costx;
  } else {
    return x / 2 * costy + x % 2 * costx;
  }
}

void solve() {
  int h, w;
  cin >> h >> w >> costx >> costy;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  int ans = 0;
  rep(i, h){
    int cur = 0;
    rep(j, w) {
      if (s[i][j] == '.') {
        cur++;
      } else {
        ans += calculate(cur);
        cur = 0;
      }
    }
    ans += calculate(cur);
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}