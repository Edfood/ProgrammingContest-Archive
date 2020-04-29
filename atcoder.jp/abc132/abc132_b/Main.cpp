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
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  int ans = 0;
  for(int i = 1; i < n - 1; ++i) {
    vector<int> t;
    t.push_back(p[i]);
    t.push_back(p[i - 1]);
    t.push_back(p[i + 1]);
    sort(t.begin(), t.end());
    if(p[i] == t[1]) ans++;
  }
  cout << ans << endl;
}