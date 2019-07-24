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
  ll x, y;
  cin >> x >> y;
  ll ans = 0;
  for(ll i = x; i <= y; i *= 2){
    ans++;
  }

  cout << ans << endl;

}
