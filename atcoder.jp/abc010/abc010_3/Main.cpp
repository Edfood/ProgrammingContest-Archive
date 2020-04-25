#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  double sx, sy, gx, gy;
  double t, v;
  double n;
  cin >> sx >> sy >> gx >> gy >> t >> v >> n;
  double maxdist = t * v;
  rep(i, n) {
    double x, y;
    cin >> x >> y;
    double sdist = sqrt(pow(x - sx, 2) + pow(y - sy, 2));
    double gdist = sqrt(pow(gx - x, 2) + pow(gy - y, 2));
    if(sdist + gdist <= maxdist) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}