#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  sort(h.begin(), h.end());
  reverse(h.begin(), h.end());
  ll ans = 0;
  for (int i = k; i < n; ++i) {
    ans += h[i];
  }
  cout << ans << endl;
}