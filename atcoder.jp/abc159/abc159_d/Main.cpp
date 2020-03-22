#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<ll> a(n), cnt(n + 1);
  rep(i, n) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  vector<ll> comb(n + 1);
  ll sum = 0;
  rep(i, n + 1) {
    comb[i] = cnt[i] * (cnt[i] - 1) / 2;
    sum += comb[i];
  }
  rep(i, n) {
    ll cur = a[i];
    ll ans = sum;
    ans -= comb[cur];
    ans += (cnt[cur] - 1) * (cnt[cur] - 2) / 2;
    cout << ans << endl;
  }
}