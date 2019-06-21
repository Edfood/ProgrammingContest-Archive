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
  vector<int> x(n), xsort(n);
  int sum = 0;
  rep(i, n){
    int a;
    cin >> a;
    x[i] = a;
    xsort[i] = a;
  }

  sort(xsort.begin(), xsort.end());
  int t = (x.size()) / 2;
  for(int i = 0; i < n; ++i){
    if(x[i] < xsort[t]){
      cout << xsort[t] << endl;
    } else {
      cout << xsort[t-1] << endl;
    }
  }

}
