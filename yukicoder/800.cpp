#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
const int MAXV = 2000 * 2000 + 2000 * 2000 + 1;
int main() {
  int n, d;
  cin >> n >> d;

  vector<int> a(MAXV), b(MAXV);

  for (int i = 1; i <= n; ++i) for (int j = 1; j <= n; ++j) {
    int v = i * i + j * j;
    a[v]++;
  }

  for (int i = 1; i <= n; ++i) for (int j = 1; j <= n; ++j) {
    int v = i * i - j * j + d;
    if (v >= MAXV || v < 0) continue;
    b[v]++;
  }

  ll ans = 0;
  rep(i, MAXV) {
    ans += a[i] * b[i];
  }

  cout << ans << endl;

}