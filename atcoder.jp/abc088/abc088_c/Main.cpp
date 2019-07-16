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
  vector<vector<int> > c(3, vector<int>(3));

  rep(i, 3){
    rep(j, 3) cin >> c[i][j];
  }
  int x[3], y[3];
  x[0] = 0;

  for(int i = 0; i < 3; ++i){
    y[i] = c[0][i] - x[0];
  }

  for(int i = 0; i < 3; ++i){
    x[i] = c[i][0] - y[0];
  }

  bool ans = true;
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j){
      if(x[i] + y[j] != c[i][j]){
        ans = false;
      }
    }
  }

  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;



}
