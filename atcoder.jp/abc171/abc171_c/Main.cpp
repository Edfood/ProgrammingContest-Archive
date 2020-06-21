#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  ll n;
  cin >> n;
  --n;
  ll cur = 1;
  int cnt = 1;
  while (cur * 26 <= n) {
    cnt++;
    cur *= 26;
    n -= cur;
  }

  string ans = string(cnt, 'a');
  for (int i = 0; i < cnt; ++i) {
    ans[i] = 'a' + n % 26;
    n /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;


}