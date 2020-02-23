#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

vector<ll> divisor(ll x){
  vector<ll> res;
  for(ll i = 1LL; i * i <= x; ++i){
    if(x % i == 0){
      res.push_back(i);
      if(i * i != x){
        res.push_back(x / i);
      }
    }
  }
  sort(res.begin(), res.end());
  reverse(res.begin(), res.end());
  return res;
}

int main(){
  ll n, m;
  cin >> n >> m;
  ll div = m / n;

  vector<ll> res = divisor(m);
  for(ll i = 0; i < res.size(); ++i){
    if(n * res[i] > m)  continue;
    if(n * res[i] <= m){
      cout << res[i] << endl;
      return 0;
    }
  }
}