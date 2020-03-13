#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, k;
  cin >> n >> k;
  ll ans = 1;
  for (int i = 0; i < n; ++i) {
    if(ans * 2 > ans + k) ans += k;
    else ans *= 2;
  }
  cout << ans << endl;
}