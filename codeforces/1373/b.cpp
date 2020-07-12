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
  int zero = 0, one = 0;
  int n =s.length();
  rep(i, n) {
    if (s[i] == '1') one++;
    else zero++;
  }
  int times = min(one, zero);
  cout << (times % 2 ? "DA" : "NET") << endl;;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}