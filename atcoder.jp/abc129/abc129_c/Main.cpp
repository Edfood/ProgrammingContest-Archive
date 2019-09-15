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
  int n, m;
  cin >> n >> m;
  vector<ll> a(m);

  rep(i, m){
    cin >> a[i];
  }

  vector<ll> dp(n + 1);

  dp[0] = 1;
  int itr = 0;
  if(m > 0 && a[0] == 1){
    dp[1] = 0;
    itr++;
  } else {
    dp[1] = 1;
  }


  for(int i = 2; i <= n; ++i){
    if(itr < m && i == a[itr]){
      dp[i] = 0;
      itr++;
    } else {
      dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }
  }

  cout << dp[n] << endl;


}