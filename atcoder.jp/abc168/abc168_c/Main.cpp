#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  double a, b, h, m;
  cin >> a >> b >> h >> m;
  double minute = 360 * m / 60;
  double hour = 360 * h / 12 + minute / 12;
  double diff = abs(minute - hour);
  double theta = min(diff, 360 - diff);
  // cout << theta << endl;

  theta = (theta / 360) * 2 * M_PI;
  double dc = a * a + b * b - 2 * a * b * cos(theta);
  dc = sqrt(dc);
  printf("%.16f\n", dc);
}