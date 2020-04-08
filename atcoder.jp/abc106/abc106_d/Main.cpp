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
  int n, m, Q;
  cin >> n >> m >> Q;
  vector<vector<int>> sum(n + 1, vector<int>(n + 1));
  rep(i, m) {
    int l, r;
    cin >> l >> r;
    sum[l][r]++;
  }
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= n; ++j) {
      sum[i][j] += sum[i - 1][j];
      sum[i][j] += sum[i][j - 1];
      sum[i][j] -= sum[i - 1][j - 1];
    }
  }

  rep(i, Q) {
    int p, q;
    cin >> p >> q;
    int ans = sum[q][q] - sum[q][p - 1] - sum[p - 1][q] + sum[p - 1][p - 1];
    cout << ans << endl;
  }

}
