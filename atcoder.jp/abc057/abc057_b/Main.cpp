#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n), c(m), d(m);
  vector<int> ans(n);
  rep(i, n) cin >> a[i] >> b[i];
  rep(i, m) cin >> c[i] >> d[i];
  rep(i, n){
    int mi = INT_MAX;
    int index = 0;
    rep(j, m){
      int dist = abs(a[i] - c[j]) + abs(b[i] - d[j]);
      if(mi > dist){
        mi = dist;
        index = j;
      }
    }
    ans[i] = index + 1;
  }
  rep(i, n) cout << ans[i] << endl;;
}