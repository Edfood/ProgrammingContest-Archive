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
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<set<int>> ch(26);
  rep(i, n) {
    int c = s[i] - 'a';
    ch[c].insert(i);
  }
  int q;
  cin >> q;
  rep(qi, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int i;
      char c;
      cin >> i >> c;
      --i;
      int pre = s[i] - 'a';
      ch[pre].erase(i);
      s[i] = c;
      
      int next = c - 'a';
      ch[next].insert(i);
    } else {
      int l, r;
      cin >> l >> r;
      --l; --r;
      int ans = 0;
      rep(i, 26) {
        auto p = ch[i].lower_bound(l);
        if(p != ch[i].end() && *p <= r) ans++;
      }
      cout << ans << endl;
    }
  }
}
