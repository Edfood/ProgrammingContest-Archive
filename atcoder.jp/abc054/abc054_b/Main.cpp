#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  vector<string> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  rep(ai, n){
    rep(aj, a[ai].length()){
      bool ok = true;
      rep(bi, m){
        rep(bj, b[bi].length()){
          if(ai + bi >= n || aj + bj >= a[ai].length()) {
            ok = false;
            break;
          }
          if(a[ai + bi][aj + bj] != b[bi][bj]){
            ok = false;
            break;
          }
        }
      }
      if(ok){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}