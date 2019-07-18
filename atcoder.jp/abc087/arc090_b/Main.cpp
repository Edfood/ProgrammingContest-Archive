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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

const int INF = INT_MAX;

vector<vector<pair<int, int> > > edge(100001);
vector<int> dist(100001, INF);
vector<bool> visited(100001, false);

int n, m;
bool bfs(int i, int d){
  if(visited[i] && d != dist[i]) return false;

  if(visited[i] && d == dist[i]) return true;

  visited[i] = true;
  dist[i] = d;
  rep(j, edge[i].size()){
    if(! bfs(edge[i][j].first, d + edge[i][j].second)) return false;
  }
  return true;
}

int main(){
  cin >> n >> m;
  rep(i, m){
    int l, r, d;
    cin >> l >> r >> d;
    l--;
    r--;
    edge[l].push_back(make_pair(r, d));
    edge[r].push_back(make_pair(l, -d));
  }
  rep(i, n){
    if(!visited[i]){
      if(!bfs(i, 0)){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;

}
