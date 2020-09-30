#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;
int n;
vector<vector<int>> to;
vector<int> before;
vector<int> s;

int dfs(int v, int pre=-1) {
  before[v] = pre;
  int tot = 0;
  int t = 0;
  for (int u : to[v]) {
    if (u == pre) continue;
    int res = dfs(u, v);
    chmax(t, res);
    tot += res;
  }
  chmax(t, n - tot - 1);
  s[v] = t;
  return tot + 1;
}

int dfs2(int v, int pre) {
  if (to[v].size() == 1) {
    return v;
  }
  int res = -1;
  for (int u : to[v]) {
    if (pre == u) continue;
    int t = dfs2(u, v);
    chmax(res, t);
  }
  return res;
}

void solve() {
  cin >> n;
  to = vector<vector<int>>(n);
  before = vector<int>(n);
  s = vector<int>(n);
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  dfs(0);
  int cent1 = -1, cent2 = -1;


  int minv = INF;
  rep(i, n) {
    if (minv > s[i]) {
      minv = s[i];
      cent1 = i;
      cent2 = -1;
    } else if (minv == s[i]) cent2 = i;
  }

  if (cent2 == -1) {
    cout << 1 << " " << to[0][0] + 1 << endl;
    cout << 1 << " " << to[0][0] + 1 << endl;
    return;
  }
  // rep(i, n) cout << s[i] << endl;

  if (before[cent1] == cent2) swap(cent1, cent2);
  int res = dfs2(cent2, cent1);

  cout << res + 1 << " " << to[res][0] + 1 << endl;
  cout << res + 1 << " " << cent1 + 1 << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}