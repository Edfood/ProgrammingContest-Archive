#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int k, n;
  cin >> k >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll mx = -1;
  for (int i = 1; i < n ; ++i) {
    mx = max(mx, a[i] - a[i - 1]);
  }
  mx = max(mx, k - a[n - 1] + a[0]);
  cout << k - mx << endl;
}