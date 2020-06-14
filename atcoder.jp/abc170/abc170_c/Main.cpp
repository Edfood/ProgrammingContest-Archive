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
  int x, n;
  cin >> x >> n;
  vector<int> p(n);
  rep(i, n) {
    cin >> p[i];
  }

  int ans = -1;
  int ansv = INF;
  for (int i = 101; i >= -1; --i) {
    bool ok = true;
    rep(j, n) {
      if (i == p[j]) ok = false;
    }

    if (ok && ansv >= abs(x - i)) {
      ansv = abs(x - i);
      ans = i;
    }
  }

  cout << ans << endl;
}