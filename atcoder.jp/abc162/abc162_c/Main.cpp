#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
int main() {
  int K;
  cin >> K;
  ll ans = 0;
  for(int i = 1; i <= K; ++i) for(int j = 1; j <= K; ++j) for(int k = 1; k <= K; ++k) {
    ll t = gcd(i, j);
    t = gcd(t, k);
    ans += t;
  }
  cout << ans << endl;
}