#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
vector<bool> used;
vector<ll> dist, a;
int dfs(int v, int d) {
  if(used[v]) return v;
  used[v] = true;
  dist[v] = d;
  return dfs(a[v], d + 1);
}

int getPos(int v, int d) {
  if (d == 0) return v;
  return getPos(a[v], d - 1);
}

int countloop(int v, int d) {
  if(used[v] == true) return d;
  used[v] = true;
  return countloop(a[v], d + 1);
}

int main() {
  ll n, k;
  cin >> n >> k;
  used.resize(n);
  dist.resize(n);
  a.resize(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }
  int start = dfs(0, 0);
  ll ans = 0;
  if (k <= dist[start]) {
    ans = getPos(0, k);
    cout << ans + 1 << endl;
    return 0;
  }
  
  k -= dist[start];
  used = vector<bool>(n, false);
  ll cnt = countloop(start, 0);
  // cout << cnt << endl;
  ll remain = k % cnt;
  ans = getPos(start, remain);
  cout << ans + 1 << endl;
  return 0;
}