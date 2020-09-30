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
  int n;
  cin >> n;
  vector<int> a(110);
  int ans = 0;
  rep(i, n) {
    int b;
    cin >> b;
    a[b]++;
  }
  rep(_, 2) {
    int t = 0;
    rep(i, 110) {
      t = i;
      if (a[i] == 0) break;
      a[i]--;
    }
    ans += t;

  }
  cout << ans << endl;
  
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}