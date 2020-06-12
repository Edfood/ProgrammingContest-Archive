#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  ll n;
  cin >> n;
  ll moves =  n / 2;
  ll ans = 0;
  ll largeArea = 3;
  rep(i, moves) {
    ll smallArea = largeArea - 2;
    ans += (largeArea * largeArea - smallArea * smallArea) * (i + 1);
    largeArea += 2;
  }
  cout << ans << endl;
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}