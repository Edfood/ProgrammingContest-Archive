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
#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const double PI = 3.1415926535897932384626433832795;
const int mod = 1000000007;
const int INF = 1001001001;
const int MAXV = 1000010;

int main() {
  int x, n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> nums(MAXV);
  for (int x : a) {
    if (nums[x] >= 1) {
      nums[x] = 2;
      continue;
    }
    for(int j = x; j < MAXV; j += x) {
      nums[j]++;
    }
  }

  int ans = 0;
  rep(i, n) {
    if (nums[a[i]] == 1) ans++;
  }
  cout << ans << endl;
}