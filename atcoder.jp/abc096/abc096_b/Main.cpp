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
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int tmp;
  tmp = max(a, max(b, c));
  int ans = 0;
  if(tmp == a){
    ans = b + c;
  } else if(tmp == b){
    ans = a + c;
  } else {
    ans = a + b;
  }

  for(int i = 0; i < k; ++i){
    tmp *= 2;
  }

  ans += tmp;
  cout << ans << endl;
}
