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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) {
    cin >> s[i];
  }

  int ans = 0;
  rep(i, h) {
    rep(j, w - 1) {
      if (s[i][j] == '.' && s[i][j + 1] == '.') ans++;
    }
  }
  
  rep(i, h - 1) {
    rep(j, w) {
      if (s[i][j] == '.' && s[i + 1][j] == '.') ans++;
    }
  }
  cout << ans << endl;
}