#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const ll INF = 20002002002;

void solve() {
  ll d, k;
  cin >> d >> k;
  ll l = -1, r = INF;
  while (l + 1 < r) {
    ll middle = (l + r) / 2;
    ll div = middle / d;
    if (middle - div < k) l = middle;
    else r = middle ;
  }
  cout << r << endl;
}

int main() {
  int test;
  cin >> test;
  rep(ti, test) solve();
}