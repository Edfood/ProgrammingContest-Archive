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
  int num = 0;
  string ans = "";
  ans += s[0];
  for(int i = 1; i < n - 1; ++i){
    num++;
  }
  ans += to_string(num);
  ans += s[n - 1];
  cout << ans << endl;

}
