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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans;
  ans = min(a, b);
  ans += min(c, d);
  cout << ans << endl;
}
