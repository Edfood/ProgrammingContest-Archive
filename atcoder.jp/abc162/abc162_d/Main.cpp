#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> a(n);
  vector<ll> cnt(3);
  rep(i, n) {
    if(s[i] == 'R') cnt[0]++;
    if(s[i] == 'G') cnt[1]++;
    if(s[i] == 'B') cnt[2]++;
  }

  ll ans = cnt[0] * cnt[1] * cnt[2];
  
  rep(i, n) {
    rep(j, n) {
      if(i >= j) continue;
      int d = j - i;
      int k = j + d;
      if(k >= n) continue;
      if(s[i] == s[j]) continue;
      if(s[j] == s[k]) continue;
      if(s[k] == s[i]) continue;
      ans--;
    }
  }
  cout << ans << endl;
}