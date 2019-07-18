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
  int n;
  cin >> n;
  vector<int> t(n), x(n), y(n);
  rep(i, n){
    cin >> t[i] >> x[i] >> y[i];
  }

  int nt = 0;
  int nx = 0;
  int ny = 0;
  bool ans = true;
  for(int i = 0; i < n; ++i){
    int dist = abs (nx + ny - x[i] - y[i]);

    if(nt + dist > t[i] || ((nt + dist) - t[i]) % 2 != 0)  ans = false;
    nt = t[i];
    nx = x[i];
    ny = y[i];
  }

  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;



}
