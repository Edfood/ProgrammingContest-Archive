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

int gcd (int a, int b){
  while(true){
    if(a < b) swap(a, b);
    if(b == 0) break;
    a = a % b;
  }
  return a;
}

int main(){
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  a--;

  ll bc = b/c;
  ll bd = b/d;
  ll bcd = b / (c * d / gcd(c, d));

  ll ac = a / c;
  ll ad = a / d;
  ll acd = a / (c * d / gcd(c, d));

  ll amade = a - (ac + ad - acd);
  ll bmade = b - (bc + bd - bcd);
  ll ans = bmade - amade;
  cout << ans << endl;

}
