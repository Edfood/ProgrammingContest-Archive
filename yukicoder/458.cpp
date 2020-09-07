#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;

  vector<int> cnt(n + 1, -1);
  vector<int> f(n + 1), primes;
  for (int i = 2; i <= n; ++i) {
    if (f[i]) continue;
    primes.push_back(i);

    for (int j = i; j <= n; j += i) {
      f[j] = i;
    }
  }
  
  cnt[0] = 0;

    for (int prime : primes) {
      for (int i = n; i >= 0; --i) {
        int nextv = i + prime;
        if (nextv > n || cnt[i] == -1) continue;
        chmax(cnt[nextv], cnt[i] + 1);
      }
    }
  
  int ans = cnt[n];
  cout << ans << endl;
}