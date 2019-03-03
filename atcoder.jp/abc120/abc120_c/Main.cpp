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
  int one = 0, zero = 0;
  int ans;
  for(int i = 0; i < s.length(); ++i){
    if(s[i] == '1') ++one;
    else ++zero;
  }
  ans = min(one, zero) * 2;
  cout << ans << endl;
}
