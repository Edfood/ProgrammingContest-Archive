#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  for (int i = 0; i < n - 1; ++i) {
    ans += min(t, a[i + 1] - a[i]);
  }
  ans += t;
  cout << ans << endl;
}