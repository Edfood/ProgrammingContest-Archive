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
typedef pair<ll,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  string s;
  cin >> s;

  vector<string> ss = {"dream", "dreamer", "erase", "eraser"};
  rep(i, 4) {
    reverse(ss[i].begin(), ss[i].end());
  }
  reverse(s.begin(), s.end());
  int n = s.length();
  for (int i = 0; i < n; ) {
    bool ok = false;
    rep(j, ss.size()) {
      int m = ss[j].length();
      if(n - i < m) continue;
      string t = s.substr(i, m);
      if(ss[j] == t) {
        ok = true;
        i += m;
        break;
      }
    }
    if(!ok) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

}
