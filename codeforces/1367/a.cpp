#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  string ans = "";
  ans.push_back(s[0]);
  for (int i = 1; i < n - 1; i += 2) ans.push_back(s[i]);
  ans.push_back(s[n - 1]);
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}