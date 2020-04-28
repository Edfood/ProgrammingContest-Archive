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
  int k;
  cin >> k;
  queue<ll> q;
  rep(i, 9) {
    q.push(i + 1);
  }
  ll cur;
  
  rep(i, k) {
    cur = q.front(); q.pop();

    ll base = cur % 10;
    cur *= 10;
    for(int i = -1; i < 2; ++i) {
      int end = base + i;
      if(end < 0 || end > 9) continue;
      q.push(cur + end);
    }
  }
  cout << cur / 10 << endl;
}