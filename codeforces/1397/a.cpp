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
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  vector<int> ch(26);
  rep(i, n) rep(j, s[i].length()) {
    int c = s[i][j] - 'a';
    ch[c]++;
  }

  bool ok = true;
  rep(i, 26) {
    if (ch[i] % n != 0) ok = false;
  }
  cout << (ok ? "YES" : "NO") << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}