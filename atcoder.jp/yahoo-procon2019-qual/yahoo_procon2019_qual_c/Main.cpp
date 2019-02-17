#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;

int main(){
  int k, a, b;
  long long biscket = 1;
  bool exchange = false;
  cin >> k >> a >> b;

  if(b > a + 1){
    while(k != 0){
      if(exchange == true){
        biscket += b;
        exchange = false;

      } else if(biscket >= a && k > 1){
        biscket -= a;
        exchange = true;

      } else {
        biscket++;
      }
      k--;
    }
  } else {
    biscket += k;
  }

  cout << biscket << endl;

}
