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
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

vector<bool> used(50, false);
vector<vector<int> > graph;
pair<int, int> p;
void check(int from){
  rep(i, graph[from].size()){
    int to = graph[from][i];
    if((p.first == from && p.second == to) || (p.first == to && p.second == from)) continue;
    if(!used[to]) {
      used[to] = true;
      check(to);
    }
  }
  return;
}

int main(){
  int n, m;
  cin >> n >> m;
  graph.resize(n);
  rep(i, m){
    int a, b;
    cin >> a >> b;
    --a; --b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  ll ans = 0;
  rep(i, n){
    if(graph[i].size() <= 0)  continue;

    rep(j, graph[i].size()){
      rep(j, n){
        used[j] = false;
      }
      p.first = i;
      p.second = graph[i][j];
      check(0);
      for(int j = 0; j < n; ++j){
        if(used[j] == false){
          ans++;
          break;
        }
      }
    }

  }
  cout << ans / 2 << endl;
}
