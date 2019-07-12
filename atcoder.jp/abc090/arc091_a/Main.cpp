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
  ll n, m;
  cin >> n >> m;
  ll ans = 0;
  if(n == 1 && m == 1){
    ans = 1;
  } else if(n == 1 || m == 1){
    ans = max(n, m) - 2;
  } else  {
    n -= 2;
    m -= 2;
    ans = n * m;
  }
  cout << ans  << endl;
}
