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
  int n, k;
  cin >> n >> k;
  vector<int> cnt(200100);
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  sort(cnt.rbegin(), cnt.rend());
  int s = 0;
  rep(i, k) {
    s += cnt[i];
  }
  int ans = n - s;
  cout << ans << endl;
}