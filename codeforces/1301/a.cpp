#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

void solve() {
  string a, b, c;
  cin >> a >> b >> c;

  int n = a.length();
  rep(i, n) {
    if (!(c[i] == a[i] || c[i] == b[i])) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}