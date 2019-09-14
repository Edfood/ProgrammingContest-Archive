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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  ll ans = 0;
  rep(i, n) cin >> a[i];

  vector<ll> sum(n + 1);
  for(int i = 1; i <= n; ++i) {
    sum[i] = sum[i - 1] + a[i - 1];
  }

  int left = 0;

  for(int right = 0; right <= n; ++right){

    if(sum[right] >= k) {
      while(sum[right] - sum[left + 1] >= k) left++;
      ans += left + 1;
    }

  }

  cout << ans << endl;

}