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
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  for(int i = 1; i <= n; ++i){
    int num = i;
    int sum = 0;
    while(num != 0){
      sum += num % 10;
      num /= 10;
    }

    if(sum >= a && sum <= b){
      ans += i;
    }
  }

  cout << ans << endl;

}
