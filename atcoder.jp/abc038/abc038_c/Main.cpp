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
  ll ans = 0;
  int prev = -1;
  int r = 0;
  for(int l = 0; l < n; ++l){
    if(l > r) r = l;
    while(r < n - 1 && a[r + 1] > a[r]) {
      prev = a[r];
      r++;
    }
    ans += r - l + 1;
  }
  cout << ans << endl;

}