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
  vector<int> a;
  rep(i, n) {
    int t;
    cin >> t;
    if(t == 0) continue;
    a.push_back(t);
  }
  int ans = 0;
  rep(i, a.size()) {
    ans += a[i];
  }
  ans = (ans + a.size() - 1) / a.size();
  cout << ans << endl;
}