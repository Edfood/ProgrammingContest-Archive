#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 10000000000000;
  for(int i = -100; i <= 100; ++i){
    ll cost = 0;
    rep(j, n){
      cost += pow(a[j] - i, 2);
    }
    ans = min(ans, cost);
  }
  cout  << ans << endl;
}