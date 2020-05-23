#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

vector<int> f(int x) {
  vector<int> res;
  int base = 1;
  while(x > 0) {
    int value = x % 10 * base;
    if(value != 0) res.push_back(x % 10 * base);
    x /= 10;
    base *= 10;
  }
  return res;
}

void solve() {
  int x;
  cin >> x;
  auto ans = f(x);
  int n = ans.size();
  cout << n << endl;
  rep(i, n) printf("%d%c", ans[i], (i == n - 1) ? '\n' : ' ');
}

int main() {
  int test;
  cin >> test;
  rep(ti, test) {
    solve();
  }
  return 0;
}