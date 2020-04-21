#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define chmin(x, y) x = min(x, y);
#define chmax(x, y) x = max(x, y);
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

const int MAXN = 20;
vector<int> to[MAXN];
  
int dfs(int d) {
  if(to[d].size() == 0) return 1;
  else if(to[d].size() == 1) return 2 * dfs(to[d][0]) + 1;
  int maxv = -1;
  int minv = INF;
  for (int x : to[d]) {
    int t = dfs(x);
    chmax(maxv, t);
    chmin(minv, t);
  }
  return maxv + minv + 1;
}

int main(){
  int n;
  cin >> n;
  rep(i, n - 1) {
    int b;
    cin >> b;
    --b;
    to[b].push_back(i + 1);
  }
  int ans = dfs(0);
  cout << ans << endl;
}