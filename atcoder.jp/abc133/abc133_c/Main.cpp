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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)



int main(){
  ll l, r;
  ll ans = LLONG_MAX;
  cin >> l >> r;
  for(ll i = l; i <= (l + 1000) && l <= r; ++i){
    for(ll j = i + 1; j <= (l + 1000) && j <= r; ++j){
      ans = min(ans, (i * j) % 2019);
    }
  }

  cout << ans << endl;

}
