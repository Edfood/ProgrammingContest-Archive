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

  int as = 0, bs = 0;

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  for(int i = 0; i < n; ++i){
    if(i % 2 == 0){
      as += a[i];
    } else {
      bs += a[i];
    }
  }

  cout << as - bs << endl;

}
