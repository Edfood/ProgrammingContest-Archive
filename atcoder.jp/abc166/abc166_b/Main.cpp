#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n, k;
  cin >> n >> k;
  vector<bool> snuke(n, false);

  rep(i, k) {
    int d;
    cin >> d;
    rep(j, d) {
      int a;
      cin >> a;
      --a;
      
      snuke[a] = true;
    }
  }
  int ans = 0;
  rep(i, n) {
    // cout << snuke[i] << endl;
    if (snuke[i] == false) ans++;
  }
  cout << ans << endl;
}