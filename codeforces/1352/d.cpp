#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  int moves = 0;
  int a = 0, b = 0;
  int prea = 0, preb = 0;
  int l = 0, r = n - 1;
  
  rep(i, n) {
    int na = 0, nb = 0;
    while (l <= r) {
      if (i % 2 == 0) {
        na += v[l];
        a += v[l];
        ++l;
        if (na > preb || l > r) {
          moves++;
          prea = na;
          break;
        }
      } else {
        nb += v[r];
        b += v[r];
        --r;
        if (nb > prea || l > r) {
          moves++;
          preb = nb;
          break;
        }
      }
    }
  }

  cout << moves << " " << a << " " << b << endl;


}

int main() {
  int t;
  cin >> t;
  rep(ti, t) solve();
}