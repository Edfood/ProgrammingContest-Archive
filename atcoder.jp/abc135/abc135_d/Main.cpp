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

const int mod = 1000000007;


int main(){
  string s;
  cin >> s;
  vector<int> dp(13, 0);

  dp[0] = 1;
  int mul = 1;

  for(int i = s.length() - 1; i >= 0; --i){
    vector<int> nextDP(13, 0);

    if(s[i] == '?'){
      for(int j = 0; j < 10; ++j){
        for(int k = 0; k < 13; ++k){
          nextDP[(j * mul + k) % 13] += dp[k];
          nextDP[(j * mul + k) % 13] %= mod;
        }
      }
    } else {
      int k = s[i] - '0';
      for(int j = 0; j < 13; ++j){
        nextDP[(k * mul + j) % 13] += dp[j];
        nextDP[(k * mul + j) % 13] %= mod;
       }
    }

    mul *= 10;
    mul %= 13;
    for(int j = 0; j < 13; ++j){
      dp[j] = nextDP[j];
    }
  }

  cout << dp[5] << endl;

}
