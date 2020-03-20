#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

ll f(int x) {
  ll res = 0;
  while (x % 2 == 0) {
    x /= 2;
    ++res;
  }
  return res;
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  for(int i = 0; i < n; ++i) {
    ans += f(a[i]);
  }
  cout << ans << endl;
}