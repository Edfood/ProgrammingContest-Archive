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
#include<type_traits>
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;



int main(){
  int n, k, m;
  cin >> n >> k >> m;
  vector<int> a(n - 1);
  rep(i, n - 1){
    cin >> a[i];
  }


  int ans = m * n;

  rep(i, n-1){
    ans -= a[i];
  }

  if(ans > k){
    cout << -1 << endl;
  } else {
    ans = max(ans, 0);
    cout << ans << endl;
  }
}