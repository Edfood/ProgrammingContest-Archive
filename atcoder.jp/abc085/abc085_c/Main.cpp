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
  int n, y;
  cin >> n >> y;

  for(int i = 0; i <= n; ++i){
    for(int j = 0; j <= n; ++j){
      if(i + j > n) break;
      if(10000 * i + 5000 * j + 1000 * (n - i - j) == y){
        cout << i << " " << j << " " << n - i - j << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
}
