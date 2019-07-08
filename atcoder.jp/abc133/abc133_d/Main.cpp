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
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i,n) cin >> a[i];

  ll x1 = 0;
  rep(i, n){
    if(i % 2 == 1){
      x1 -= a[i];
    } else {
      x1 +=  a[i];
    }
  }

  vector<int> ans(n);
  ans[0] = x1;
  for(int i = 1; i < n; ++i){
    ans[i] = 2 * a[i - 1] - ans[i - 1];
  }

  rep(i, n) cout << ans[i] << " ";
  cout << endl;
}
