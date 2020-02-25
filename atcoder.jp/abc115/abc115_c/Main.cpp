#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  sort(h.begin(), h.end());
  int ans = INT_MAX;
  for(int i = k - 1; i < n; ++i){
    int hmax = h[i];
    int hmin = h[i - k + 1];
    ans = min(ans, hmax - hmin);
  }
  cout << ans << endl;
}