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
  int n;
  cin >> n;
  vector<char> s(n);
  rep(i, n) cin >> s[i];

  bool y = false;

  rep(i, n){
    if(s[i] == 'Y') y = true;
  }

  if(y){
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }
}
