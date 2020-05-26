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
  int n, m;
  cin >> n >> m;
  vector<int> imos(m + 1);
  int sum = 0;
  rep(i, n) {
    int l, r, s;
    cin >> l >> r >> s;
    --l;
    --r;
    sum += s;
    imos[l] += s;
    imos[r + 1] += -s;
  }
  
  rep(i, m) {
    imos[i + 1] += imos[i];
  }
  int minv = INF;
  rep(i, m) {
    // cout << imos[i] << endl;
    chmin(minv, imos[i]);
  }
  int ans = sum - minv;
  cout << ans << endl;
}