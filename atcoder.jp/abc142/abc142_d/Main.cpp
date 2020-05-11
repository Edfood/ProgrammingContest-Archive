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
const ll INF = LLONG_MAX;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}

vector<pair<ll, int>> factorize(ll n) {
  vector<pair<ll, int>> res;
  for( ll i = 2; i * i <= n; ++i){
    if(n % i) continue;
    res.emplace_back(i, 0);
    while(n%i == 0) {
      n /= i;
      res.back().second++;
    }
  }
  if(n != 1) res.emplace_back(n, 1);
  return res;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll g = gcd(a, b);
  auto primes = factorize(g);
  int ans = primes.size();
  cout << ans + 1 << endl;

}