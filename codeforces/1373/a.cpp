#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  if (a >= c) {
    cout << -1 << " " << b << endl;
  } else if (a * b <= c) {
    cout << 1 << " " << -1 << endl;
  } else {
    cout << 1 << " " << b << endl;
  }
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}