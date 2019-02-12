#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;

int main(){
  int n;
  int cake = 0, donut = 0;
  cin >> n;
  cake = n / 4 + 1;
  donut =  n / 7 + 1;
  for(int i = 0; i <= cake; ++i){
    for(int j = 0; j <= donut; ++j){
      if((i * 4 + j * 7) == n){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
