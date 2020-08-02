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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int l = 0;
  int r = 1001001001;
  while (l + 1 < r) {
    int mid = (l + r) / 2;
    int nk = 0;
    rep(i, n) {
      nk += (a[i] - 1) / mid;
    }

    if (nk <= k) r = mid;
    else l = mid;
  }
  int ans = ceil(l);
  
  cout << r << endl;
}