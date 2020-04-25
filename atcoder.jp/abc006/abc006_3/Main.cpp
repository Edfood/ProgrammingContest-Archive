#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  int senior = 0;

  if(m % 2) {
    m -= 3;
    --n;
    senior++;
  }
  for(int i = 0; i <= n; ++i) {
    int child = i;
    int diff = m - child * 4;
    int adult = diff / 2;
    if(diff >= 0 && child + adult == n) {
      cout << adult << " " << senior << " " << child << endl;
      return 0;
    }
  }
  cout << -1 << " " << -1 << " " << -1 << " " << endl;
}