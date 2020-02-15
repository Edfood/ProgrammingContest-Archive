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

vector<vector<int>> c(10, vector<int>(10));
int V = 10; // 頂点数
void warshall_floyd() {
  for(int k = 0; k < V; ++k)
    for(int i = 0; i < V; ++i)
      for(int j = 0; j < V; ++j)  c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
}
int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, 10){
    rep(j, 10)  cin >> c[i][j];
  }
  rep(i, h)rep(j, w)  cin >> a[i][j];

  warshall_floyd();

  ll ans = 0;
  rep(i, h){
    rep(j, w){
      int num = a[i][j];
      if(num == -1 || num == 1) continue;
      ans += c[num][1];
    }
  }

  cout << ans  << endl;

  
}
