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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int left = a + b;
  int right = c + d;

  if(left > right)  cout << "Left" << endl;
  else if(left < right) cout << "Right" << endl;
  else cout << "Balanced" << endl;


}
