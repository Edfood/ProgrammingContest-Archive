#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int MAXS = 100100;
int main(){
  int n, k;
  cin >> n >> k;
  bool dp[MAXS];
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, MAXS) dp[i] = false;

  rep(i, k + 1) {
    rep(j, n) {
      if(i - a[j] >= 0 && dp[i - a[j]] == false) dp[i] = true;
    }
  }
  cout << (dp[k] ? "First" : "Second") << endl;

}