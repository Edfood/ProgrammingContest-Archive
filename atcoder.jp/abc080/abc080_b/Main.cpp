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

const int mod = 1000000007;


int main(){
  int n;
  cin >> n;
  int sum = 0;

  int tmp = n;

  for(; tmp > 0;){
    sum += tmp % 10;
    tmp /= 10;
  }
  
  if(n % sum == 0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
