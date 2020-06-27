#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  string s, t;
  cin >> s >> t;
  int ans = 0;
  int n = s.length();
  rep(i, n) {
    if (s[i] != t[i]) ans++;
  }

  cout << ans << endl;
}