#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  sort(a.rbegin(), a.rend());
  int cnt = 1;
  int cur = 0;
  rep(i, n - 1) {
    ans += a[cur];
    cnt++;
    if(cnt == 2) {
      cnt = 0;
      cur++;
    }
  }
  cout << ans << endl;
}