#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int n, k;
vector<vector<int>> a;
int dfs(int d, int value) {
  if(d == n) {
    return value;
  }
  int res = INF;
  rep(i, k) {
    int nextv = value ^ a[d][i];
    res = min(res, dfs(d + 1, nextv));
  }
  return res;
}

int main() {
  cin >> n >> k;
  a.resize(n, vector<int>(k));
  rep(i, n) rep(j, k) cin >> a[i][j];
  int ans = dfs(0, 0);
  if(ans) cout << "Nothing" << endl;
  else cout << "Found" << endl;
}