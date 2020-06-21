#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  map<ll, ll> mp;
  rep(i, n) {
    cin >> a[i];
    mp[a[i]]++;
  }
  ll q;
  cin >> q;
  ll sum = 0;
  for (auto value : mp) {
    sum += value.first * value.second;
  }

  rep(i, q) {
    ll b, c;
    cin >> b >> c;
    ll tmp = mp[b];
    sum -= mp[b] * b;
    sum += mp[b] * c;
    mp[b] = 0;
    mp[c] += tmp;
    cout << sum << endl;
  }

}