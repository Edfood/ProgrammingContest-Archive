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

  ll ans = 0;
  char cur = s[0];
  int l = 0;
  int r = n - 1;
  while (l < r) {
    while (s[r] == 'W' && l < r) {
      --r;
    }
    if (s[l] == 'W' && s[r] == 'R') {
      --r;
      ans++;
    }
    ++l;
  }

  cout << ans << endl;
}