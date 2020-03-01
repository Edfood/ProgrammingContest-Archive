#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  int ans = 0;
  rep(i, n){
    ans += min(abs(x[i] - k), x[i]) * 2;
  }
  cout << ans << endl;
}