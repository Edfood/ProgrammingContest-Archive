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
  int a, b;
  cin >> a >> b;
  int ans = 0;

  for(int i = a; i <= b; ++i){
    string str = to_string(i);
    int l = 0, r = str.length() - 1;
    while(true){
      if(l >= r){
        ans++;
        break;
      }

      if(str[l] != str[r])  break;

      l++;
      r--;
    }
  }

  cout << ans << endl;


}
