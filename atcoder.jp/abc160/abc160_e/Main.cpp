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
  int X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  vector<int> a(A), b(B), c(C);

  rep(i, A) cin >> a[i];
  rep(i, B) cin >> b[i];
  rep(i, C) cin >> c[i];
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());

  vector<int> p;
  rep(i, X) {
    p.push_back(a[i]);
  }
  rep(i, Y) {
    p.push_back(b[i]);
  }
  rep(i, C) {
    p.push_back(c[i]);
  }
  sort(p.rbegin(), p.rend());

  ll ans = 0;
  rep(i, X + Y) {
    ans += p[i];
  }

  cout << ans << endl;

}