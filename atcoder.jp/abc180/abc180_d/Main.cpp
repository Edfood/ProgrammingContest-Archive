#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const ll INF = (ll)1e18 + 1;

int main() {
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  ll xp = 0;

  while (x <= (b + x) / a && x < y / a) {
    x *= a;
    xp++;
  }
  y -= x;

  xp += (y - 1) / b;
  cout << xp << endl;

}