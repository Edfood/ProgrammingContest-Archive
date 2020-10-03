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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  map<P, int> mp;
  int x = 0, y = 0;
  mp[P(0, 0)]++;
  rep(i, n) {
    int c = s[i];
    if (c == 'A') x++;
    else if(c == 'T') x--;
    else if(c == 'C') y++;
    else y--;
    ans += mp[P(x, y)];
    mp[P(x, y)]++;
  }
  cout << ans << endl;
}