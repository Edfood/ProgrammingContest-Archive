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
  vector<int> a(n), b(n);
  vector<int> imos(10010010);
  rep(i, n) {
    cin >> a[i] >> b[i];
    imos[a[i]]++;
    imos[b[i] + 1]--;
  }
  int s = 0;
  int ans = 0;
  rep(i, 10010010) {
    s += imos[i];
    ans = max(s, ans);
  }
  cout << ans << endl;
}