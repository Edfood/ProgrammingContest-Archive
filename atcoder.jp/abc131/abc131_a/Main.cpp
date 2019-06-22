#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
#include<set>
#include<iomanip>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
  string s;
  cin >> s;
  char tmp = s[0];
  bool hantei = false;
  for(int i = 1; i < s.length(); ++i){
    if(s[i] == tmp){
      hantei = true;
    } else {
      tmp = s[i];
    }
  }

  string ans;
  if(hantei){
    ans = "Bad";
  } else {
    ans = "Good";
  }

  cout << ans << endl;

}
