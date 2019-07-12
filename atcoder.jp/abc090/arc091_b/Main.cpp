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
  ll n, k;
  cin >> n >> k;

  ll ans = 0;
  if(k == 0){
    cout << n * n << endl;
  } else {
    for(int i = k + 1; i <= n; ++i){
      ll multiplier = 0;
      ll num = i - k;
      ans += max((ll)0, n % i - k + 1);
      multiplier = n / i;

      ans += num * multiplier;
    }

    cout << ans << endl;
  }

}
