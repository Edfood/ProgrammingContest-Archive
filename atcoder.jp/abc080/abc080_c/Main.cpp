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

const int mod = 1000000007;
int f[100][10];
int p[100][11];
int joshino[10];
int main(){
  int n;
  cin >> n;

  

  rep(i, n){
    rep(j, 10){
      cin >> f[i][j];
    }
  }


  rep(i, n){
    rep(j, 11)  cin >> p[i][j];
  }

  ll ans = LONG_MIN;


  for(int bit = 1; bit < (1 << 10); ++bit){
    ll profit = 0;

    for(int i = 0; i < n; ++i){
      int c = 0;
      for(int j = 0; j < 10; ++j){
        c += f[i][j] && ((bit >> j) & 1);
        
      }
      profit += p[i][c];
    }

    ans = max(profit, ans);
  }

  cout << ans << endl;


}
