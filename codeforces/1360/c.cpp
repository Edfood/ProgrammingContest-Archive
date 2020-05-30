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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  int odd = 0, even = 0;
  bool exist = false;
  rep(i, n) {
    if (a[i] % 2) odd++;
    else even++;
  }
  for (int i = 0; i < n - 1; ++i) {
    // cout << abs(a[i + 1] - a[i])<< " ";
    if (abs(a[i + 1] - a[i]) == 1) exist = true;
  }
  // cout << endl;
  bool ans;
  if (odd % 2 == 0 || exist) {
    ans = true;
  } else {
    ans = false;
  }
  
  cout << (ans ? "YES" : "NO") << endl;
  
}

int main() {
  int t;
  cin >> t;
  rep(ti, t) solve();
}