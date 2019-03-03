#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;


int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(b / a > c){
    cout << c << endl;
  } else {
    cout << b / a << endl;
  }
}
