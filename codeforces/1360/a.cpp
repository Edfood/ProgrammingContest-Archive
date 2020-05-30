#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int a, b;
  cin >> a >> b;
  if(a > b) swap(a, b);
  int ans = max(a * 2, b);
  ans *= ans;
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  rep(ti, t) solve();
}