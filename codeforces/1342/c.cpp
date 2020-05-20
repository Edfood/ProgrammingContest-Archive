#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int ts;
  cin >> ts;
  rep(ti, ts) {
    ll a, b, q;
    cin >> a >> b >> q;
    vector<ll> ans(q);
    if (a > b) swap(a, b);
    ll num = lcm(a, b);
    ll cnt = 0;
    rep(i, num) {
      int left = (i % a) % b;
      int right = (i % b) % a;
      if (left != right) cnt++;
    }
    rep(i, q) {
      ll l, r;
      cin >> l >> r;
      ll sum = r / num * cnt + max(0LL, r % num - (num - cnt) + 1);
      sum -= l / num * cnt + max(0LL, l % num - (num - cnt));
      ans[i] = sum;
    }
    rep(i, q) printf("%lld%c", ans[i], (i == q - 1 ? '\n' : ' '));
  }
}