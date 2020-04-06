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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }
  vector<int> ans(n);
  for (int i = n - 1; i >= 0; --i) {
    int s = 0;
    int next = i + 1;
    for(int j = 2 * next - 1; j < n; j += next) {
      s += ans[j];
    }
    // cout << s << endl;
    if(s % 2 != a[i]) ans[i] = 1; 
  }

  int cnt = 0;
  rep(i, n) cnt += ans[i];
  cout << cnt << endl;
  rep(i, n) if(ans[i] == 1) cout << i + 1 << " ";
  if(cnt != 0) cout << endl;
}