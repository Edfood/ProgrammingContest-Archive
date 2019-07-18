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
  vector<int> d(n);
  rep(i, n) cin >> d[i];
  sort(d.begin(), d.end());

  int ans = 1;
  int dtmp = d[0];
  for(int i = 1; i < d.size(); ++i){
    if(dtmp == d[i])  continue;
    else {
      dtmp = d[i];
      ++ans;
    }
  }

  cout << ans << endl;

}
