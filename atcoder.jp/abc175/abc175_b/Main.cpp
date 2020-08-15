#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<ll> l(n);
  rep(i, n) cin >> l[i];
  sort(l.rbegin(), l.rend());

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        
        ll a = l[i];
        ll b = l[j];
        ll c = l[k];
        if (a == b || b == c || c == a) continue;
        if (a < b + c) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
}