#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;


int main(){
  int a, b;
  cin >> a >> b;
  int s = 0;
  for(int i = 0; i < 2; ++i){
    if(a >= b){
      s += a;
      a--;
    } else {
      s+=b;
      b--;
    }
  }
  cout << s << endl;
}
