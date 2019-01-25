#include<iostream>
#include<vector>
#include<complex>
#include<string>
using namespace std;
int main(){
  string s;
  cin >> s;
  
  int ans = 1000;
  string temp;
  for (int i = 0; i < s.size() - 2; i++) {
    temp = s.substr(i, 3);
    if(ans > abs(stoi(temp) - 753)){
      ans = abs(stoi(temp) - 753);
    }
  }
  cout << ans << endl;
    
}