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
  vector<int> l(n);

  rep(i, n) cin >> l[i];

  int s = 0;
  int ans = 1;
  for(int i = 0; s <= x && i < n; ++i){
    s += l[i];
    if(s <= x){
        ans++;
    }

  }

  cout << ans << endl;

}
