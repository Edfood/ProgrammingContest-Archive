#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
int dx[] = {1, -1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  bool flag = true;
  rep(i, n) {
    cin >> a[i];
    if (a[i] != -1) flag = false;
  }
  if (flag) {
    cout << "0 0" << endl;
    return; 
  }
  vector<int> t;
  vector<bool> use(n);
  rep(i, n) {
    if (a[i] != -1) continue;
    rep(j, 2) {
      int x = dx[j] + i;
      if (x < 0 || x >= n) continue;
      if (a[x] == -1) continue;
      use[x] = true;
    }
  }

  rep(i, n) if (use[i]) t.push_back(a[i]);
  int m = t.size();
  sort(t.begin(), t.end());
  int med;
  if (m % 2 == 0) {
    med = (t[m / 2] + t[m / 2 - 1]) / 2;
  } else {
    med = t[m / 2];
  }

  int ans = 0;
  rep(i, n - 1) {
    if (a[i] == -1) a[i] = med;
    if (a[i + 1] == -1) a[i + 1] = med;
    int diff = abs(a[i + 1] - a[i]);
    chmax(ans, diff);
  }
  cout << ans << " " << med << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}