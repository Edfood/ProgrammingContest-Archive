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
  ll f0, f1, n;
  cin >> f0 >> f1 >> n;
  ll ans;
  if (n % 3 == 0) ans = f0;
  else if(n % 3 == 1) ans = f1;
  else ans = f0 ^ f1;

  cout << ans << endl;
}