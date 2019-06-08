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
using namespace std;

typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int n;
  cin >> n;

  vector<int> dp(100010);
  dp[0] = 0;
  for(int n = 1; n <= 100000; ++n){
    dp[n] = INT_MAX;
    int power = 1;
    while(power <= n){
      dp[n] = min(dp[n], dp[n - power] + 1);
      power *= 6;
    }
    power = 1;
    while(power <= n){
      dp[n] = min(dp[n], dp[n - power] + 1);
      power *= 9;
    }
  }

  cout << dp[n] << endl;

}
