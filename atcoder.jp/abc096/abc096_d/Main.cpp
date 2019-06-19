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

bool isprime(int p){
  if(p == 1) return false;
  for(int i = 2; i < p; ++i){
    if(p % i == 0) return false;
  }
  return true;
}

int main(){
  int n;
  cin >> n;

  for(int i = 6; i <= 55555 && n > 0; i += 5){

    if(isprime(i)){
      cout << i <<" ";
      n--;
    }
  }
  cout << endl;
}
