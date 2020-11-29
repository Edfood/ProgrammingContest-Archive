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
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  gy = -gy;
  double slope = (gy - sy) / (gx - sx);
  double ans = (-gy + slope * gx) / slope;
  printf("%.7lf\n", ans);

}