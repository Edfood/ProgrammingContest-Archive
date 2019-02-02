#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  int tmp = 0;
  for(int i = 1; i <= n; i+=2){
    for(int j = 1; j <= i; j++){
      if(i % j == 0) tmp++;
    }
    if(tmp == 8) ans++;
    tmp = 0;
  }

  cout << ans << endl;
}
