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
  int n, l;
  cin >> n >> l;
  int ans = 0;
  int mi = INT_MAX;
  rep(i, n){
    ans += l + i;
    if(abs(mi) > abs(l + i)){
      mi = l + i;
    }
  }
  ans -= mi;
  cout << ans << endl;
}
