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
typedef pair<ll,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

P convert(int x) {
  P res;
  res.second = x % 10;
  while (x > 0) {
    res.first = x % 10;
    x /= 10;
  }
  return res;
}

int main(){
  int n;
  cin >> n;
  map<P, int> freq;
  for (int i = 1; i <= n; ++i) {
    P p = convert(i);
    freq[p]++;
  }
  ll ans = 0;
  for (int i = 1; i <= n; ++i) {
    P p = convert(i);
    P q = P(p.second, p.first);
    ans += freq[q];
  }
  cout << ans << endl;
}