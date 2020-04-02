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
#include<tuple>
#include<deque>
#include<cassert>
using namespace std;
typedef long long ll;
typedef pair<ll,int> p;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;
ll f(ll n) {
  ll res1, res2;
  for(ll i = 1; i * i <= n; ++i) {
    if(n % i == 0) {
      res1 = i;
      res2 = n / i;
    }
  } 
  return res1 + res2 - 2;
}

int main(){
  ll n;
  cin >> n;
  ll ans = f(n);
  cout << ans << endl;
}
