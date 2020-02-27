#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n, k, x, y;
  cin >> n >> k >> x >> y;
  ll ans = min(n, k) * x;
  ans += max(0LL, n - k) * y;
  cout << ans << endl;
}