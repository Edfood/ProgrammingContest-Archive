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
  int a, b, c;
  cin >> a >> b >> c;
  int ma = max(a, max(b, c));
  int diff = 0;
  if(ma == a){
    diff -= b + c;
  } else if( ma == b){
    diff -= a + c;
  } else {
    diff -= a + b;
  }

  diff += 2 * ma;

  int ans = diff / 2;

  if(diff % 2 == 1) ans += 2;

  cout << ans << endl;

}
