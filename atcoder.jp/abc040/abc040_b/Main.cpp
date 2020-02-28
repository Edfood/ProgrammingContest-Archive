#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n;
  cin >> n;
  ll ans = LLONG_MAX;
  for(int i = 1; i <= n; ++i){
    ll w = n / i;
    ans = min(abs(w - i) + n - w * i , ans);
  }
  cout << ans << endl;
  
}