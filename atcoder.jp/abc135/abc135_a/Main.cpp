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
  int a, b;
  cin >> a >> b;
  int ans = abs(a - b);
  if(ans % 2 == 0){
    cout << ans / 2 + min(a, b) << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
  
}
