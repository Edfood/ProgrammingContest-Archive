#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;

int main(){
  string s;
  cin >> s;
  int count = 0;
  bool ans = true;
  if(s[0]!= 'A') {
    ans = false;
  }

  for(int i = 2; i < s.length() -1; ++i){
    if(s.at(i) == 'C'){
      ++count;
    }
  }
  if(count != 1){
    ans = false;
  }

  count = 0;

  for(int i = 0; i < s.length(); ++i){
    if(s[i] >= 'A' && s[i] <= 'Z'){
      count++;
    }
  }
  if(count != 2){
    ans = false;
  }

  if(ans){
    cout << "AC" << endl;
  } else {
    cout << "WA" << endl;
  }


}
