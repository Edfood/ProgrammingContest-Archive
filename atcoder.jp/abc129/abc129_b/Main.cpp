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
  vector<int> w(n);

  int sum1 = 0, sum2 = 0;
  int ans = INT_MAX;
  rep(i, n) cin >> w[i];
  for(int i = 0; i < n; ++i){
    sum1 = 0;
    sum2 = 0;
    for(int j = 0; j < i; ++j){
      sum1 += w[j];
    }
    for(int j = i; j < n; ++j){
      sum2 += w[j];
    }

    ans = min(ans, abs(sum1 - sum2));
  }

  cout << ans << endl;
}
