#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n;
  cin >> n;
  int odd = 0, even = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (i % 2 != a % 2) {
      if (i % 2) odd++;
      else even++;
    }
  }

  if (odd == even) cout << odd << endl;
  else cout << -1 << endl;
}

int main() {
  ll test;
  cin >> test;
  for (int i = 0; i < test; ++i) solve();
}