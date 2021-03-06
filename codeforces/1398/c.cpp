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
  string s;
  cin >> s;
  rep(i, n) a[i] = s[i] - '0';

  int sum = 0;
  map<int, int> cnt;
  ll ans = 0;
  cnt[1]++;
  rep(i, n) {
    sum += a[i];
    int cur = sum - i;
    cnt[sum - i]++;
    ans += cnt[cur] - 1;
  }

  cout << ans << endl;

}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}