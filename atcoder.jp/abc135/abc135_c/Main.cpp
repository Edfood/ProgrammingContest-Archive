#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
#include<set>
#include<iomanip>
#include<map>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  ll n;
  cin >> n;
  vector<ll> a(n + 1), b(n);
  rep(i, n+1) cin >> a[i];
  rep(i, n) cin >> b[i];
  ll ans = 0;

  for(ll i = n - 1; i >= 0; --i){
    ll m = min(b[i], a[i + 1]);
    b[i] -= m;
    a[i + 1] -= m;
    ans += m;

    m = min(b[i], a[i]);
    b[i] -= m;
    a[i] -= m;
    ans += m;
    
  }
  
  cout << ans << endl;

}
