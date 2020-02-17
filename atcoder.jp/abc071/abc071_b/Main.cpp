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
  char ans = 0;
  for(char a = 'a'; a <= 'z'; ++a){
    bool ok = true;
    for(int i = 0; i < s.length(); ++i){
      if(s[i] == a) {
        ok = false;
        break;
      }
    }
    if(ok) {
      ans = a;
      break;
    } 
  }
  if(ans != 0)  cout << ans << endl;
  else cout << "None" << endl;
}
