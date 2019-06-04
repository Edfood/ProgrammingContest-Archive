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
using namespace std;

const int INF = 100000000;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)




int main(){
  int n;
  cin >> n;
  vector<vector<int> > to(n), cost(n);
  rep(i, n - 1){
    int a, b, w;
    cin >> a >> b >> w;
    a--;
    b--;
    to[a].push_back(b); cost[a].push_back(w);
    to[b].push_back(a); cost[b].push_back(w);
  }

  vector<int> ans(n, -1);
  queue<int> q;

  ans[0] = 0;
  q.push(0);

  while(!q.empty()){

    int v = q.front();
    q.pop();
    rep(i, to[v].size()){
      int u = to[v][i];
      int w = cost[v][i];
      if(ans[u] != -1) continue;
      ans[u] = (ans[v] + w) % 2;
      q.push(u);
    }
  }

  rep(i, n){
    cout << ans[i] << endl;
  }

}
