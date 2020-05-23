#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


void solve() {
  int n, k;
  cin >> n >> k;
  rep(i, 2) { 
    int diff = 0;
    if (i % 2) diff = 1;
    else diff = 2;
    
    int lastvalue = n - diff * (k - 1);
    if (lastvalue >= diff && lastvalue % 2 == diff % 2) {
      cout << "YES" << endl;
      rep(j, k) {
        if (j == k - 1) cout << lastvalue << endl;
        else cout << diff << " ";
      }
      return ;
    }
  }
  cout << "NO" << endl;
}
int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}