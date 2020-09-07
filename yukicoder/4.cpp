#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

bool dp[10010];

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }

  if (sum % 2 == 1) {
    cout << "impossible" << endl;
    return 0;
  }

  sum /= 2;

  dp[0] = true;
  rep(i, n) for (int j = sum; j >= 0; --j) {
    if (dp[j] == false) continue;

    int nj = a[i] + j;
    if (nj > sum) continue;
    dp[nj] = true;
  }
  bool ok = dp[sum];
  cout << (ok ? "possible" : "impossible") << endl;
  
}