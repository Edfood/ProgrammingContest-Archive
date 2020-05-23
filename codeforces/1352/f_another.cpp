#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
void solve() {
  int n;
  cin >> n;
  if (n < 4) {
    cout << -1 << endl;
    return;
  }

  for (int i = n; i > 0; --i) {
    if (i % 2) cout << i << " ";
  }
  cout << "4 2 ";
  
  for (int i = 6; i <= n; ++i) {
    if (i % 2 == 0) cout << i << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}