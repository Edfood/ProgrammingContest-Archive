#include<iostream>
#include<string>
using namespace std;
int main(){
  int x;
  int len = 0;
  cin >> x;
  
  int temp = x;
  int num = 0;
  int ans = 0;
  for(int i = 0; temp > 0; i++){
    num = temp % 10;
    len ++;
    temp /= 10;
  }
  
  for( int i = 0; i < len; i++){
    ans *= 10;
    ans += num;
  }
  
  if(ans <  x){
    if(num == 9){
      num = 1;
      len++;
    } else {
      num++;
    }
    ans = 0;
    for(int i = 0; i < len; i++){
      ans *= 10;
      ans += num;
    }
  }
  
  cout << ans;
}