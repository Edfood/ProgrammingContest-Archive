#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n;
  cin >> n;
  ll ans = 1;
  for(int i = 1; i <= n; ++i){
    ans *= i;
    ans %= mod;
  }
  cout << ans << endl;
}