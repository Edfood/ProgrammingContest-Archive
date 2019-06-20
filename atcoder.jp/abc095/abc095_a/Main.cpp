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
  int ans = 700;
  for(int i = 0; i < 3; ++i){
    if(s[i] == 'o') ans+=100;
  }

  cout << ans << endl;
}
