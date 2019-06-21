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
  int n;
  cin >> n;
  vector<int> a(n);
  int ma = INT_MIN;
  rep(i, n){
    int x;
    cin >> x;
    ma = max(ma, x);
    a[i] = x;
  }
  int half = ma / 2;
  int close = INT_MAX;
  for(int i = 0; i < n; ++i){
    if(abs(half - close) > abs(half - a[i]) && ma != a[i]){
      close = a[i];
    }
  }

  cout << ma << " " << close << endl;


}
