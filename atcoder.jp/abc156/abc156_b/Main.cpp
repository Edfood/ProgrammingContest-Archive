#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  while(n > 0){
    ans++;
    n /= k;
  }
  cout << ans << endl;
}