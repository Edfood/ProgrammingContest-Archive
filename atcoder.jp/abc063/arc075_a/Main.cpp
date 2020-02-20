#include <bits/stdc++.h>
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
  sort(a.begin(), a.end());
  int ans = 0;
  rep(i, n) ans += a[i];
  rep(i, n){
    if(ans % 10) break;
    if((ans - a[i]) % 10) {
      ans -= a[i];
      break;
    }
  }
  if(ans % 10 == 0) ans = 0;
  cout << ans << endl;
}