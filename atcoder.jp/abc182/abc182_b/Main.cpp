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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  int mt = 0;
  for (int i = 2; i < 1001; ++i) {
    int t = 0;
    rep(j, n) {
      if (a[j] % i == 0) t++; 
    }

    if (mt < t) {
      mt = t;
      ans = i;
    }
  }
  cout << ans << endl;
}