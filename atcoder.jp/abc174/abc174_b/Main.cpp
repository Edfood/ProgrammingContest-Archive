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
  int n, d;
  cin >> n >> d;
  int ans = 0;
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    double dist = sqrt(x * x + y * y);
    if (dist <= d) ans++;
  }
  cout << ans << endl;
}