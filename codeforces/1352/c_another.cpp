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
  int add = (k - 1) / (d - 1);
  int ans = k + add;
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(ti, test) solve();
}