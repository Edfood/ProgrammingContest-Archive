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
  string s;
  cin >> s;
  int ans = 0;
  if (s[0] == s[1] && s[1] == s[2] && s[2] == 'R') ans = 3;
  else if (s[0] == s[1] && s[1] == 'R') ans = 2;
  else if (s[1] == s[2] && s[2] == 'R') ans = 2;
  else if (s[0] == 'R' || s[1] == 'R' || s[2] == 'R') ans = 1;
  cout << ans << endl;
}