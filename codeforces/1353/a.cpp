#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n, m;
  cin >> n >> m;
  int ans = 0;
  if (n == 1) {
    ans = 0;
  } else if(n == 2) {
    ans = m;
  } else {
    ans = 2 * m;
  }
  cout << ans << endl;
}

int main() {
  
  int t;
  cin >> t;
  rep(i, t) solve();

}
