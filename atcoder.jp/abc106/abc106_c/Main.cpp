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
  ll k;
  cin >> s >> k;
  rep(i, s.length()){
    if(i + 1 == k){
      if(s[i] == '1') cout << 1 << endl;
      else cout << s[i] << endl;
      return 0;
    }
    if(s[i] != '1'){
      cout << s[i] << endl;
      return 0;
    }
  }
}