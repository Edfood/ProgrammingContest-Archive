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
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  bool ans = false;
  int cnt = 0;
  for(int i = 1; i <= n; ++i){
    if(p[i - 1] != i) cnt++;
  }


 if(cnt == 0 || cnt == 2){
   cout << "YES" << endl;
 } else {
   cout << "NO" << endl;
 }


}
