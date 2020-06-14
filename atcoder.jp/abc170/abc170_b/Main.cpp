#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  bool ans = false;
  int x, y;
  cin >> x >> y;
  rep(i, x + 1) {
    int turu = i * 2;
    int kame = (x - i) * 4;
    if (turu + kame == y) ans = true;
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

}