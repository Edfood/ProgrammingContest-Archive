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
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 1000000007;
const int INF = 1001001001;
ll n;
int dfs(int seven=0, int five=0, int three=0, ll cur=0) {
  if(cur > n) return 0;
  int res = 0;
  if(seven > 0 && five > 0 && three > 0) res++;
  res += dfs(seven + 1, five, three, cur * 10 + 7);
  res += dfs(seven, five + 1, three, cur * 10 + 5);
  res += dfs(seven, five, three + 1, cur * 10 + 3);
  return res;
}

int main() {
  cin >> n;
  int ans = dfs();
  cout << ans << endl;
}