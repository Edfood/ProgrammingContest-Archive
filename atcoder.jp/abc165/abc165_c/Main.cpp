#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
int n, m, q;
vector<int> a, b, c, d;

int dfs(int depth, int pre, vector<int> cur) {
  int res = 0;
  if (depth == n) {
    // cout << cur << endl;
    rep(i, q) {
      int aa = cur[a[i]];
      int bb = cur[b[i]];
      if(bb - aa == c[i]) res += d[i];
    }
    return res;
  }

  for (int i = pre; i <= m; ++i){
    vector<int> next = cur;
    next.push_back(i);
    chmax(res, dfs(depth + 1, pre = i, next));
  }
  return res;
}

int main() {
  
  cin >> n >> m >> q;
  a.resize(q);
  b.resize(q);
  c.resize(q);
  d.resize(q);
  rep(i, q) {
    int s, t;
    cin >> s >> t >> c[i] >> d[i];
    --s; --t;
    a[i] = s;
    b[i] = t;
  }
  vector<int> t;
  int ans = dfs(0, 1, t);
  cout << ans << endl;
}