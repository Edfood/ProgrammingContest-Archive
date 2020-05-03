#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> to(100100);
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  
  int ans = 0;
  rep(i, n) {
    bool ok = true;
    for (int v : to[i]) {
      if (h[i] <= h[v]) {
        ok = false;
      }
    }
    if (ok) ans++;
  }
  cout << ans << endl;
}