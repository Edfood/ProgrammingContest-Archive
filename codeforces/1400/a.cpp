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
  n *= 2;
  string s;
  cin >> s;

  string ans = "";
  rep(i, n / 2) {
    ans.push_back(s[i * 2]);
  }

  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}