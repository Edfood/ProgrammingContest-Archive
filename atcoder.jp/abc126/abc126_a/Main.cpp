#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
using namespace std;


int main(){
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  k--;

  if(islower(s[k])){

  } else {
    s[k] = s[k] - 'A' + 'a';
  }

  cout << s << endl;
}
