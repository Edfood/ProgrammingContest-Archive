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
#include<deque>
#include<cassert>
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;
bool is_palindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return t == s;
}

int main() {
  string s;
  cin >> s;
  bool ans1 = is_palindrome(s);
  bool ans2 = is_palindrome(s.substr(0, s.length() / 2));
  bool ans;
  if(ans1 && ans2) ans =true;
  else ans = false;
  
  cout << (ans ? "Yes" : "No") << endl;
}
