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
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;

struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

int main() {
  int n;
  cin >> n;
  int a, b;
  cin >> a >> b;
  --a; --b;
  int m;
  cin >> m;
  vector<vector<int>> graph(n);
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  queue<int> q;

  vector<mint> cnt(n);
  vector<int> dist(n, INF);
  cnt[a] = 1;
  q.push(a);
  while (!q.empty()) {
    auto p = q.front(); q.pop();
    if(p == b) break;
    for(int u : graph[p]) {
      if(dist[u] == INF) {
        dist[u] = dist[p] + 1;
        cnt[u] += cnt[p];
        q.push(u);
      } else if(dist[u] == dist[p] + 1) {
        cnt[u] += cnt[p];
      }
    }
  }
  cout << cnt[b] << endl;
}