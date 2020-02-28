#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  ll ans = 0;
  rep(i, n) cin >> a[i];
  vector<int> dp(n + 1);
  dp[1] = abs(a[0] - a[1]);
  for(int i = 2; i < n; ++i){
    dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
  }
  cout << dp[n - 1]  << endl;
}