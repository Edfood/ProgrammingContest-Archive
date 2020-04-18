#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

struct edge { int to, cost; };
int n;                            //頂点数
vector<vector<edge>> graph(1010); //重み付きグラフ
vector<ll> d(1010, INF);          //最短距離
vector<bool> used(1010, false); //すでに使われたかのフラグ

void dijkstra(int s){
  priority_queue<P, vector<P>, greater<P> > que;
  d[s] = 0;
  que.push(P(0, s));

  while(!que.empty()){
    P p = que.top(); que.pop();
    int v = p.second;
    if(d[v] < p.first) continue;
    for(int i = 0; i < graph[v].size(); ++i){
      edge e = graph[v][i];
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main() {
  int h, w, t;
  cin >> h >> w >> t;
  n = h * w;
  vector<string> v(h);
  int s, g;
  rep(i, h) {
    cin >> v[i];
    rep(j, w) {
      if(v[i][j] == 'S') s = i * w + j;
      if(v[i][j] == 'G') g = i * w + j;
    }
  }
  int l = -1, r = 1001001001;
  ll ans = 0;

  while(l + 1 < r) {
    int middle = (l + r) / 2;
    graph = vector<vector<edge>>(h * w);
    d = vector<ll>(h * w, INF);
    used = vector<bool>(h * w, false);

    auto get_edge = [&](int x) {
      edge res;
      res.to = x;
      int i = x / w;
      int j = x % w;
      if(v[i][j] == '#') res.cost = middle;
      else res.cost = 1;
      return res;
    };
    rep(i, h) {
      rep(j, w) {
        int u = i * w + j;
        if(i - 1 >= 0) graph[u].push_back(get_edge(u - w));
        if(j - 1 >= 0) graph[u].push_back(get_edge(u - 1));
        if(j + 1 < w) graph[u].push_back(get_edge(u + 1)) ;
        if(i + 1 < h) graph[u].push_back(get_edge(u + w)); 
      }
    }
    dijkstra(s);
    ll dist = d[g];
    if(dist > t) r = middle;
    else l = middle;
  }
  cout << l << endl;

}