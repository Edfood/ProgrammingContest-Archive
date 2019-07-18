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
  cin >> a >> b;
  int tmp = b;
  while(tmp != 0){
    tmp /= 10;
    a *= 10;
  }
  vector<int> heihou;
  for(int i = 1; ; ++i){
    int nijou = i * i;
    if(nijou >= 100100) break;

    heihou.push_back(nijou);
  }

  bool ans = false;
  a += b;

  for(int i = 0; i < heihou.size(); ++i){
    if(a == heihou[i]){
      ans = true;
    }
  }

  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;


}
