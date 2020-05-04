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


int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans;
  if (n <= a) ans = 1;
  else if (a == b) ans = n % (a + 1);
  else if (a < b) ans = 0;
  else ans = 1;
  cout << (ans ? "Takahashi" : "Aoki") << endl;
}