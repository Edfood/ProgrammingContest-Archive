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
  int n = s.length();
  ll ans = 0;
  for(int i = n - 2; i >= 0; i -= 2){
    string left = s.substr(0, i / 2);
    string right = s.substr(i/2, i / 2);
    if(left == right) {
      string ans = left + right;
      cout << ans.length() << endl;
      return 0;
    }
  }
}
