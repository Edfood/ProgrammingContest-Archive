#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n, q;
  cin >> n >> q;
  string ac = "AC";
  string s;
  cin >> s;
  vector<int> sum(n + 1);
  int cur = 0;
  for (int i = 1; i < n; ++i) {
    if(s[i] == ac[1] && s[i - 1] == ac[0]) cur++;
    sum[i + 1] = cur;
  }
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    --l; --r;
    
    int ans = sum[r + 1] - sum[l + 1];
    cout << ans << endl;
  }
}