#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n, x;
  cin >>n >> x;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  for(int i = 0 ;i < n - 1; ++i){
    int s = a[i] + a[i + 1];
    if(s > x) {
      ans += s - x;
      a[i + 1] = max(a[i + 1] - (s - x), 0LL);
    }
  }
  cout << ans << endl;
}