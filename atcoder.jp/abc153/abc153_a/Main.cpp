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
#include<type_traits>
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;


int main(){
  int h, a;
  cin >> h >> a;
  int ans = 0;
  while(true){
    if(h <= 0) break;
    h -= a;
    ans++;
  }

  cout << ans << endl;
  
}