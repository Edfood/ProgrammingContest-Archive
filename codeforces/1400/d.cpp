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
  vector<int> left(n + 1), right(n + 1);

  ll ans = 0;
  rep(j, n) {
    right = vector<int>(n + 1, 0);

    for (int k = n - 1; k > j; --k) {
      ans += left[a[k]] * right[a[j]];
      right[a[k]]++;
    }

    left[a[j]]++;
  }
  
  cout << ans << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}