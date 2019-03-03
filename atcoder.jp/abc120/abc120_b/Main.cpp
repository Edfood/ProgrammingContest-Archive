#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;


int main(){
  int a, b, k;
  int count = 0;
  cin >> a >> b >> k;

  for(int i = min(a, b); i > 0; --i){
    if(a % i == 0 && b % i == 0){
      count++;
      if(count == k){
        cout << i << endl;
      }
    }
  }
}
