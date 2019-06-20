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
#include<set>
#include<iomanip>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
  int n, x;
  cin >> n >> x;
  vector<int> m(n);
  rep(i, n){
    cin >> m[i];
  }

  int ans = 0;
  bool flag = true;
  int mi = INT_MAX;
  for(int i = 0; i < n && flag;++i){
    if(x < 0){
      flag = false;
    } else {
        ans++;
        x -= m[i];
    }
    mi = min(mi, m[i]);
  }

  while(flag){
    if(x < 0){
      flag = false;
    } else {
      ans++;
      x -= mi;
    }
  }
  ans--;


  cout << ans << endl;


}
