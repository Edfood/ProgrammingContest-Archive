#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = LLONG_MAX;
  ll total = 0;
  ll tmp = 0;
  for(int i = 0; i < n; ++i){
    tmp += a[i];
    if (i % 2) {
      if(tmp >= 0) {
        total += abs(tmp) + 1;
        tmp = -1;
      }
    } else {
      if(tmp <= 0) {
        total += abs(tmp) + 1;
        tmp = 1;
      }
    }
  }
  ans = total;
  total = 0;
  tmp = 0;
  for(int i = 0; i < n; ++i){
    tmp += a[i];
    if (i % 2 == 0) {
      if(tmp >= 0) {
        total += abs(tmp) + 1;
        tmp = -1;
      }
    } else {
      if(tmp <= 0) {
        total += abs(tmp) + 1;
        tmp = 1;
      }
    }
  }

  ans = min(total, ans);
  cout << ans << endl;
}