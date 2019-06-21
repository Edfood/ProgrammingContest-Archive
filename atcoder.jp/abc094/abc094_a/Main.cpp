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
  int a, b, x;
  cin >> a >> b >> x;
  if(a <= x && x <= a + b){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
