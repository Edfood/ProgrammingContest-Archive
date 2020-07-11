#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
ll f(ll x, ll y, ll z) {
  return x * x + y * y + z * z + x * y + y * z + z * x;
}
int main() {
  int n;
  cin >> n;
  vector<int> ans(n + 1);

  rep(x, n + 1) {
    rep(y, n + 1) {
      rep(z, n + 1) {
        ll res = f(x + 1, y + 1, z + 1);
        if (res > n) break;
        ans[res]++;
      }
    }
  }

  rep(i, n) printf("%d\n", ans[i + 1]);
}