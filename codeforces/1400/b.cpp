#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;


void solve() {
  ll p, f;
  cin >> p >> f;
  ll n, m;
  cin >> n >> m;
  ll s, w;
  cin >> s >> w;
  if (s > w) {
    swap(s, w);
    swap(n, m);
  }
  
  ll ans = 0;
  int it_num = min(n, p / s);

  for (ll s1 = 0; s1 <= it_num; s1++) {
    // １人目が持つ
    ll w1 = min(m, (p - s1 * s) / w);

    // ２人めが持つ
    ll s2 = min(n - s1, f / s);
    ll w2 = min(m - w1, (f - s2 * s) / w);
    ans = max(ans, s1 + w1 + s2 + w2);
  }

  cout << ans << endl;

}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}