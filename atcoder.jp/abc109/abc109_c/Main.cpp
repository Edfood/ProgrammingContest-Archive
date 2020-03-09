#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

ll gcd (ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main(){
  ll n, X;
  cin >> n >> X;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  x.push_back(X);
  ++n;
  sort(x.begin(), x.end());
  ll ans = x[0] - x[1];
  for (int i = 1; i < n; ++i) {
    ans = gcd(ans, x[i] - x[i - 1]);
  }
  cout << ans << endl;
}