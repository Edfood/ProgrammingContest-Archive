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
  ll n;
  cin >> n;

  ll a = 3;
  rep(i, 1000) {

    ll b = 5;
    ll diff = n - a;

    rep(j, 1000) {
      if (diff - b == 0) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
      if (b > diff / 5) break;
      b *= 5;
    }

    if (a > n / 3) break; 
    a *= 3;
  }
  
  cout << -1 << endl;
}