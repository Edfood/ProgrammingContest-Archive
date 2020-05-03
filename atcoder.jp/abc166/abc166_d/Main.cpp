#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int MAXV = 400;

int main() {
  ll x;
  cin >> x;
  vector<ll> value(MAXV);
  rep(i, MAXV) {
    value[i] = pow(i, 5);
    // if(i != 0) cout << value[i] - value[i - 1] << endl;
  }

  for (ll i = -MAXV + 1; i < MAXV; ++i) {
    for (ll j = -MAXV + 1; j < MAXV; ++j) {
      // cout << j << endl;
      ll a = value[abs(i)];
      if (i < 0) a = -a;
      ll b = value[abs(j)];
      if (j < 0) b = -b;
      if (a - b == x) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
}