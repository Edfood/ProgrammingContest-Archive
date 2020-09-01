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
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  // 1ステップ目
  cout << 1 << " " << 1 << endl;
  cout << -a[0] << endl;
  a[0] = 0;

  if (n == 1) {
    cout << 1 << " " << 1 << endl;
    cout << 0 << endl;
    cout << 1 << " " << 1 << endl;
    cout << 0 << endl;
    return 0;
  }


  // 2ステップ目
  cout << 2 << " " << n << endl;
  int mul = n - 1;
  for(int i = 1; i < n; ++i) {
    ll b = mul * (a[i] % n);
    printf("%lld%c", b, (i == n - 1 ? '\n' : ' '));
    a[i] += b;
  }

  cout << 1 << " " << n << endl; 
  // 3ステップ目
  rep(i, n) {
    printf("%lld%c", -a[i], (i == n - 1 ? '\n' : ' '));
  }
}