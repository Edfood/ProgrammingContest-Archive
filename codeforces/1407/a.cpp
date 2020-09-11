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
  vector<int> a(n);

  int cnt0 = 0, cnt1 = 0;
  rep(i, n) {
    cin >> a[i];
    if (a[i] == 0) cnt0++;
    else cnt1++;
  }

  vector<int> ans;
  
  if (cnt1 <= n / 2) {
    rep(i, n) {
      if (a[i] == 1) continue;
      ans.push_back(a[i]);
    }
  } else {
    bool once = true;
    if (cnt1 % 2 == 1) once = false;
    rep(i, n) {
      if (a[i] == 0) continue;
      if (!once) {
        once = true;
        continue;
      }
      ans.push_back(a[i]);
    }
  }

  cout << ans.size() << endl;
  rep(i, ans.size()) { 
    printf("%d%c", ans[i], (i == ans.size() - 1 ? '\n' : ' '));
  }
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}