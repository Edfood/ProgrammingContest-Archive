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
  int a, b, k;
  cin >> a >> b >> k;


  for(int i = a; i <= b; ++i){
    if(i - a < k || b - i < k){
      cout << i << endl;
    }
  }
}
