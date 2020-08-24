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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  --k;
  int cur = 0;
  int ans = 0;
  if (s[k] == '(') {
    for (int i = k; i < s.size(); ++i) {
      if (s[i] == '(') cur++;
      else cur--;
      if (cur == 0) {
        ans = i;
        break;
      }
    }

  } else {
    for (int i = k; i >= 0; --i) {
      if (s[i] == '(') cur++;
      else cur--;
      if (cur == 0) {
        ans = i;
        break;
      }
    }
  }

  ans++;

  cout << ans << endl;
}