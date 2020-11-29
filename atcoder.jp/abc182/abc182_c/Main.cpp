#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int f(ll x) {
  int res = 0;
  while (x > 0) {
    res++;
    x /= 10;
  }
  return res;
}


int main() {
  ll n;
  cin >> n;
  ll k = f(n);
  int ans = INF;

  rep(i, 1<<k) {
    int cnt = 0;
    ll t = n;
    string s = "";
    for(int j = 0; t > 0; ++j, t /= 10) {
      if (i>>j&1) {
        cnt++;
        continue;
      } else {
        s.push_back(t % 10 + '0');
      }
    }
    reverse(s.begin(), s.end());
    if (s == "") continue;
    ll v = stoll(s);

    if (v % 3 == 0) chmin(ans, cnt);
  }

  if (ans == INF) ans = -1;
  cout << ans << endl;
}