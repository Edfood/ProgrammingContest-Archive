#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  vector<string> s(12);
  rep (i, 12)  cin >> s[i];
  int ans = 0;
  rep (i, 12) {
    bool ok = false;
    rep (j, s[i].length()) {
      if (s[i][j] == 'r') {
        ok = true;
      }
    }
    if (ok) ++ans;
  }
  cout << ans << endl;
}