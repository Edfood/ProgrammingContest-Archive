#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int ans = 0;
  for (int i = 0; i < n; ) {
    int j = i + 1;
    for (; j < n; ++j) if (s[j] == '1') break;
    int len = j - i;
    if (s[i] == '1') {
      len = max(0, len - k - 1);
    }
    if (j != n) {
      len = max(0, len - k);
    }
    i = j;
    ans += (len + k) / (k + 1);

  }
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}