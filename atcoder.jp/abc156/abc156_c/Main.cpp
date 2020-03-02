#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> x(n);
  rep (i, n) cin >> x[i];
  ll ans = LLONG_MAX;
  for (int i = 1; i <= 101; ++i) {
    ll cost = 0;
    rep (j, n) {
      cost += pow(x[j] - i, 2); 
    }
    ans = min(ans, cost);
  }
  cout << ans << endl;
}