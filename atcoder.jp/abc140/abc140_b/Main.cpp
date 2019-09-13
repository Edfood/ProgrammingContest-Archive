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
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n - 1);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n - 1) cin >> c[i];
  int ans = 0;
  ans += b[a[0] - 1];
  for(int i = 1; i < n; ++i){
    ans += b[a[i] - 1];
    if(a[i - 1] == a[i] - 1){
      ans += c[a[i - 1] - 1];
    }
  }

  cout << ans << endl;
}