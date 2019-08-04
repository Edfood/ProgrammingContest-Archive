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
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 1; i <= n; ++i){
    int count = 0;
    int tmp = i;
    while(tmp > 0){
      tmp /= 10;
      count++;
    }
    if(count % 2 == 1) ans++;
  }

  cout << ans << endl;
}
