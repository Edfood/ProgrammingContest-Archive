#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


int main() {
  ll n;
  cin >> n;
  ll num = 0;
  ll l = 0;
  for(ll i = 1; i <= n; ++i) {
    ll t = i * (i + 1) / 2;
    if(t == n) {
      l = i;
      break;
    }
  }
  if(l == 0) {
    cout << "No" << endl;
    return 0;
  }

  vector<vector<int>> ans(l + 1);
  rep(i, l + 1) ans[i].push_back(l);
  ll sum = 1;
  for (int k = l; k >= 1; --k) {
    for(int i = 0; i < k; ++i) {
      ans[l - k].push_back(sum + i);
      ans[l - k + i + 1].push_back(sum + i);
    }
    sum += k;
  }
  cout << "Yes" << endl;
  cout << l + 1 << endl;
  rep(i, l + 1) {
    rep(l, ans.size()) printf("%d%c", ans[i][l], (l == ans.size() - 1 ? '\n' : ' '));
  }
}