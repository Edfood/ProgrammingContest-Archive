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
#include<map>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  bool end = false;
  int ans = 0;
  while(true){
    for(int i = 0; i < n; ++i){
      if((a[i] % 2) == 0) a[i] /= 2;
      else {
        end = true;
        break;
      }
    }
    if(end) break;
    ans++;
  }

  cout << ans << endl;
}
