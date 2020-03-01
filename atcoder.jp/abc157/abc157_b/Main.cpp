#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  vector<vector<int> > a(3, vector<int>(3));
  rep(i, 3) rep(j, 3) cin >> a[i][j];
  int n;
  cin >> n;
  vector<int> b(n);
  rep(i, n) {
    int b;
    cin >> b;
    rep(i, 3){
      rep(j, 3){
        if(a[i][j] == b) a[i][j] = -1;
      }
    }
  }
  bool ans = false;
  rep(i, 3){
    if(a[i][0] == -1 && a[i][1] == -1 && a[i][2] == -1) ans=true;
  }
  rep(i, 3){
    if(a[0][i] == -1 && a[1][i] == -1 && a[2][i] == -1) ans=true;
  }
  if(a[0][0] == -1 && a[1][1] == -1 && a[2][2] == -1) ans = true;
  if(a[0][2] == -1 && a[1][1]== -1 && a[2][0] == -1) ans = true;
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}