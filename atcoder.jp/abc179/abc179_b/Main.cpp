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
  int cur = 0;
  bool ans = false;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    if (a == b) cur++;
    else cur = 0;
    if (cur >= 3) ans = true;
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}