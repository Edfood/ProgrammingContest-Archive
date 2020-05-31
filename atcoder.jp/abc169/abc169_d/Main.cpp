#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

vector<pair<ll, ll>> factorize(ll n) {
  vector<pair<ll, ll>> res;
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

ll getKaisu(ll x) {
  ll res = 0;
  ll cur = 1;
  while (x >= cur) {
    x -= cur;
    cur++;
    res++;
  }
  return res;
}


int main() {
  ll n; 
  cin >> n;
  auto primes = factorize(n);
  ll ans = 0;
  for (auto p : primes) {
    // cout << p.first << " " << p.second << endl;
    // cout << getKaisu(p.second) << endl;;
    ans += getKaisu(p.second);
  }
  cout << ans << endl;
}