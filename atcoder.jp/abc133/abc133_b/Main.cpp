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
  int n, d;
  cin >> n >> d;
  int ans = 0;

  vector<vector<int> > x(n, vector<int>(d));
  rep(i, n){
    rep(j, d){
      cin >> x[i][j];
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = i; j < n; ++j){
      double distance = 0;
      if(i == j)  continue;
      for(int k = 0; k < d; ++k){
        distance += pow(x[i][k] - x[j][k], 2);
      }
      distance = sqrt(distance);

      if(distance == (int)distance) ans++;


    }
  }

  cout << ans << endl;
}
