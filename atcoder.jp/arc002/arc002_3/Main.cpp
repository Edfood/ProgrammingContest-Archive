#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
const char ch[] = {'A', 'B', 'X', 'Y'};

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = INF;
  rep(a, 4) rep(b, 4) rep(c, 4) rep(d, 4) {
    string l = {ch[a], ch[b]};
    string r = {ch[c], ch[d]};
    // cout << l << endl;
    int cur = 0;
    int cnt = 0;
    while (cur < n) {
      cnt++;
      if (n - cur >= 2) {
        string sub = s.substr(cur, 2);
        if (l == sub || r == sub) {
          cur += 2;
        } else {
          cur ++;
        } 
      } else {
        cur++;
      }
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}