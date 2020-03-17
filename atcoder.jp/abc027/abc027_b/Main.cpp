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
  rep(i, n) cin >> a[i];
  int sum = 0;
  rep(i, n) sum += a[i];
  if(sum % n) {
    cout << -1 << endl;
    return 0;
  }
  int ave = sum / n;
  int ans = 0;
  int cur = 0;

  rep(i, n) {
    if(cur != 0) ++ans;
    cur += a[i] - ave;

  }
  cout << ans << endl;

}