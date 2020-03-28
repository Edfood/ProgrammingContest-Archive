#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  ll l = 0, r = 0;
  ll ans = 0;
  for(int i = 0; i < n; ++i) {
    while(l < n && a[l] < b[i]) ++l;
    while(r < n && b[i] >= c[r]) ++r;
    ans += l * (n - r);
  }
  cout << ans << endl;
}