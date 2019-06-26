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
  vector<ll> A(n);
  rep(i, n) cin >> A[i];
  ll r = 0;
  ll s = 0, xs = 0;
  ll ans = 0;

  for(int l = 0; l < n; ++l){
    while(r < n && (s + A[r]) == (xs ^ A[r])){
      s += A[r];
      xs ^= A[r];
      r++;
    }

    ans += r - l;
    s -= A[l];
    xs ^= A[l];

  }

  cout << ans << endl;

}
