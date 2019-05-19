#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
using namespace std;


int main(){
  int n;
  double k;
  cin >> n >> k;
  double tmp = 0;
  double ans = 0;
  double count = 1;

  tmp = 1;

  count = 1.0 / n;

  for(int i = n; i > 0; --i){
    while(i < k){
      k /= 2;
      count /= 2;
    }
    ans += count;
  }

  printf("%.12f\n", ans);
}
