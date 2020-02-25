#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> t(n);
  rep(i, n) cin >> t[i];
  int m;
  cin >> m;
  vector<int> p(m), x(m);
  rep(i, m) cin >> p[i] >> x[i];
  
  rep(i, m){
    ll ans = 0;
    rep(j, n){
      if(p[i] - 1 == j) ans += x[i];
      else ans += t[j];
    }
    cout << ans << endl;
  }
}