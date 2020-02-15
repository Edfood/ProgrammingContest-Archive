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
#include<type_traits>
#include<tuple>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  for(int bit = 0; bit <= (1<<3); ++bit){
    string ans = "";
    ans += s[0];
    int value = s[0] - '0';
    int b = bit;
    for(int i = 1; i < 4; ++i){
      if(b & 1) {
        value += s[i] - '0';
        ans += '+';
      } else {
        value -= s[i] - '0';
        ans += '-';
      }
      ans += s[i];
      b = b >> 1;
    }
    if(value == 7)  {
      cout << ans  + "=7" << endl;
      return 0;
    }
  }
}
