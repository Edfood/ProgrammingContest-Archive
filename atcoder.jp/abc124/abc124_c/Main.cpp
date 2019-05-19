#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  else return gcd(b, a%b);
}

int main(){
  string s;
  cin >> s;
  char tmp = '0';
  int count1 = 0, count2 = 0;
  for(int i = 0; i < s.length(); ++i){
    if(tmp != s[i]){
      count1++;
    }
    if(tmp == '0') tmp = '1';
    else tmp = '0';
  }

  tmp = '1';
  for(int i = 0; i < s.length(); ++i){
    if(tmp != s[i]){
      count2++;
    }
    if(tmp == '0') tmp = '1';
    else tmp = '0';
  }

  cout << min (count1, count2) << endl;
}
