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
  int a, b, c;
  int k;
  cin >> a >> b >> c;
  cin >> k;
  while (a >= b) {
    k--;
    b *= 2;
  }
  while (b >= c) {
    k--;
    c *= 2;
  }

  cout << (k >= 0 ? "Yes" : "No") << endl;
}