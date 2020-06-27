#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  const int MAXN = 10000010;
  vector<int> cnt(MAXN);
  for(int i = 1; i <= n; ++i) {
    for (int j = i; j <= n ; j += i) {
      cnt[j]++;
    }
  }
  for (ll i = 1; i <= n; ++i) {
    int value = cnt[i];
    ans += i * (ll)value;
  }
  cout << ans << endl;
}