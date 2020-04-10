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
  int R, G, B, n;
  cin >> R >> G >> B >> n;
  int ans = 0;
  for(int i = 0; i <= n; ++i) {
    for(int j = 0; j <= n; ++j) {
      if(n - (i * R + j * G) < 0) continue;
      if((n - (i * R + j * G)) % B == 0) ++ans;
    }
  }
  cout << ans << endl;
}