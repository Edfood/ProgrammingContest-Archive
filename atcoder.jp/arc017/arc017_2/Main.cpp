#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }
  int ans = 0;
  int pre = -100;
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] > pre) cnt++;
    else cnt = 1;
    if(cnt >= k) {
      ans++;
    }
    pre = a[i];
  }
  cout << ans << endl;
}