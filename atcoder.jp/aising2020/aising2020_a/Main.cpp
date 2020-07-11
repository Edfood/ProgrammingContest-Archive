#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int l, r, d;
  cin >> l >> r >> d;
  int ans = 0;
  for (int i = l; i <= r; ++i) {
    if (i % d == 0) ans++;
  }
  cout << ans << endl;
}