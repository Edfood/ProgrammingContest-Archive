#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, q;
  cin >> n >> q;
  vector<int> ans(n);
  rep(i, q){
    int l, r, t;
    cin >> l >> r >> t;
    l--; r--;
    for(int i = l; i <= r; ++i){
      ans[i] = t;
    }
  }
  rep(i, n) cout << ans[i] << endl;
}