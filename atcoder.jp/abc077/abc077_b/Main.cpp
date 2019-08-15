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
#include<type_traits>
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;

int main(){
  ll n;
  cin >> n;
  ll ans = 0;

  for(int i = 1; i <= n; ++i){
    if(i * i > n) break;

    ans = i * i;
  }

  cout << ans << endl;
}
