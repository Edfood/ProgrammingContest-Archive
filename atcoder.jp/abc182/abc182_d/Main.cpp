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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll sum = 0;
  ll cur = 0;

  ll ans = 0;
  ll maxv = 0;
  rep(i, n) {
    sum += a[i];
    chmax(maxv, sum);
    chmax(ans, cur + maxv);
    cur += sum;
  }

  cout << ans << endl;
}