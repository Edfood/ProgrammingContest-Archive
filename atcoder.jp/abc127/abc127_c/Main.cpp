#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
using namespace std;


#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> l(m);
  vector<int> r(m);

  rep(i, m){
    cin >> l[i] >> r[i];
  }

  int conl, conr;
  conl = l[0]; conr = r[0];
  for(int i = 1; i < m; ++i){
    conl = max(l[i], conl);
    conr = min(r[i], conr);
  }
  int ans = 0;
  for(int i = conl; i <= conr; ++i){
    if(n >= i) ans++;
  }

  cout << ans << endl;

}
