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
  int a = 0, b = 0, c = 0;
  rep(i, s.length()){
    if(s[i] == 'a') a++;
    if(s[i] == 'b') b++;
    if(s[i] == 'c') c++;
  }

  if(a == 1 && b == 1 && c == 1)  cout << "Yes" << endl;
  else cout << "No" << endl;

}
