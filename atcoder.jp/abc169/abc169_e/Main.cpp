#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n; 
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll ans;
  if (n % 2) {
    ll l = a[n / 2];
    ll r = b[n / 2];
    ans = r - l + 1;
  } else {
    ll l = a[n / 2] + a[n / 2 - 1];
    ll r = b[n / 2] + b[n / 2 - 1];
    ans = r - l + 1;
  }

  cout << ans << endl;
}