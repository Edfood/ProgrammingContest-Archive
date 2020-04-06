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

int main() {
  int n, m;
  cin >> n >> m;
  bool d1[200010], d2[200010];
  rep(i, 200010) d1[i] = 0, d2[i] = 0;

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    if(a == 1) d1[b] = true;
    if(b == n) d2[a] = true;
  }
  bool ans = false;
  rep(i, 200010) if(d1[i] && d2[i]) ans = true; 

  cout << (ans ? "POSSIBLE" : "IMPOSSIBLE") << endl;
}
