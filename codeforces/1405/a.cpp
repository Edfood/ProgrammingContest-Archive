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
  rep(i, n) cin >> a[i];
  reverse(a.begin(), a.end());
  rep(i, n) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}