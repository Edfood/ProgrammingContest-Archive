#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
using namespace std;
typedef long long ll;
#define rep(i, N) for(ll)=0;(i)<(N);(i)++)

int main(){
  int n;
  cin >> n;
  int s = 0;
  int tmp = n;
  while(tmp > 0){
    s += tmp % 10;
    tmp /= 10;
  }
  if(n % s) cout << "No" << endl;
  else cout << "Yes" << endl;
}
