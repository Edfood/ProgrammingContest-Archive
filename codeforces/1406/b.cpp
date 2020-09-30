#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

void solve() {
  int n;
  cin >> n;
  vector<int> minus, plus;
  rep(i, n) {
    int a;
    cin >> a;
    if (a >= 0) plus.push_back(a);
    else minus.push_back(a);
  }
  ll ans = -LLONG_MAX;

  sort(minus.rbegin(), minus.rend());
  sort(plus.begin(), plus.end());
  rep(pn, 6) {
    ll t = -LLONG_MAX;
    bool ok = true;
    int remain = 5;
    for (int i = 0; i < pn; ++i) {
      if (i >= plus.size()) {
        ok = false;
        break;
      }
      if (t == -LLONG_MAX) t = plus[i];
      else t *= plus[i];
      
    }

    for (int i = 0; i < 5 - pn; ++i) {
      if (i >= minus.size()) {
        ok = false;
        break;
      } 
      if (t == -LLONG_MAX) t = minus[i];
      else t *= minus[i];
    }

    reverse(minus.begin(), minus.end());
    reverse(plus.begin(), plus.end());

    if (ok) ans = max(ans, t);
  }
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}