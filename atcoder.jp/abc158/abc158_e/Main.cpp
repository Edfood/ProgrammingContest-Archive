#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, p;
  cin >> n >> p;
  string s;
  cin >> s;
  ll ans = 0;
  if (10 % p == 0) {
    rep (i, n) {
      if((s[i] - '0') % p == 0) ans += i + 1;
    }
    cout << ans << endl;
    return 0;
  }
  int ten = 1;
  vector<int> d(n + 1);
  for (int i = n - 1; i >= 0; --i) {
    int a = (s[i] - '0') * ten % p;
    d[i] = (d[i + 1] + a) % p ;
    ten *= 10;
    ten %= p;
  }
  vector<int> count(p);
  for (int i = n; i >= 0; --i) {
    ans += count[d[i]];
    count[d[i]]++;
  }

  cout << ans << endl;

}