#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  ll n;
  cin >> n;
  vector<ll> ans;
  for (ll i = 1; i * i <= n; ++i) {
    if (n % i != 0) continue;
    ans.push_back(i);
    if (i * i != n) ans.push_back(n / i);
  }

  sort(ans.begin(), ans.end());
  rep(i, ans.size()) cout << ans[i] << endl;
}