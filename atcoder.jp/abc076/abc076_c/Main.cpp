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
using namespace std;
typedef long long ll;
typedef pair<ll,int> p;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;
string convert(string s) {
  rep(i, s.length()) if(s[i] == '?') s[i] = 'a';
  return s;
}

int main() {
  string s, t;
  cin >> s >> t;
  int n = s.length(), m = t.length();

  for (int i = n - 1; i >= 0; --i) {
    string ans = s;
    if (i + m > n) continue;
    string subs = s.substr(i, m);
    bool ok = true;
    rep(j, m) {
      if (s[i + j] == '?') {
        ans[i + j] = t[j];
      } else if(s[i + j] != t[j]) ok = false;
    }
    if (ok) {
      ans = convert(ans);
      cout << ans << endl;
      return 0;
    }
  }
  cout << "UNRESTORABLE"<< endl;
}
