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
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  for(int i = 0; i <= a; ++i){
    for(int j = 0; j <= b; ++j){
      for(int k = 0; k <= c; ++k){
        int value = i * 500 + j * 100 + k * 50;
        if(value == x)  ++ans;
      }
    }
  }

  cout << ans << endl;
}
