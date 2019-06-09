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

typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  int sum = 0;
  int m = 0;
  for(int i = 0; i < 3; ++i){
    m = max(m, a[i]);
    sum += a[i];
  }

  sum -= m;

  cout << sum << endl;



}
