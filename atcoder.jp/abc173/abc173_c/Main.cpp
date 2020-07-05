#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  int ans = 0;

  rep(i, 1 << h) rep(j, 1 << w) {
    int cnt = 0;
    rep(x, h) rep(y, w) {
      if (1<<x&i) continue;
      if (1<<y&j) continue;
      if (s[x][y] == '#') cnt++;
    }
    if (cnt == k) ans++;
  }

  cout << ans << endl;
}