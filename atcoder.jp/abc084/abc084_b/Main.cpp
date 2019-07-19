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
#include<map>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int a, b;
  string s;
  cin >> a >> b;
  cin >> s;

  for(int i = 0; i < a; ++i){
    int value = s[i] - '0';
    if(!(value >= 0 && value <= 9)){
      cout << "No" << endl;
      return 0;
    }
  }
  if(s[a] != '-'){
    cout << "No" << endl;
    return 0;
  }

  for(int i = a + 1; i < a + b; ++i){
    int value = s[i] - '0';
    if(!(value >= 0 && value <= 9)){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
