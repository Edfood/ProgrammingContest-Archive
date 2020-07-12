#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  ll ans = n;
  ll cur = 0;
  rep(i, n) {
    if (s[i] == '+') cur++;
    else cur--;
    if (cur < 0) ans += i + 1;
    cur = max(0LL, cur);
  }
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}