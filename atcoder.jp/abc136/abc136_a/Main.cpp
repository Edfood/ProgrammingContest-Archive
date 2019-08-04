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
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int ans = c - (a - b);
  if(ans <= 0){
    cout << 0 << endl;
  } else {
    cout << ans << endl;
  }
}
