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
  int d, x;
  cin >>n >> d >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = x;
  for(int i = 0; i < n; ++i){
    ans += ((d - 1) / a[i]) + 1;
  }

  cout << ans << endl;
}
