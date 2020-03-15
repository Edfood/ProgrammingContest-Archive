#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n, d, k;
  cin >> n >> d >> k;
  vector<int> l(d), r(d);
  rep(i, d) cin >> l[i] >> r[i];
  rep(i, k) {
    int s, t;
    int ans = 0;
    cin >> s >> t;
    rep(j, n) {
      ans++;
      if(l[j] <= s && s <= r[j]) {
        if(l[j] <= t && t <= r[j]) break;
        else if(s < t) s = r[j];
        else s = l[j];
      }
    }
    cout << ans << endl;
  }
}