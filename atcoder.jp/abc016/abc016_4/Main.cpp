#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
const int mod = 1000000007;
struct P {
  int x, y;
};
bool cross(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) {
	double a = (cx - dx)*(ay - cy) + (cy - dy)*(cx - ax), b = (cx - dx)*(by - cy) + (cy - dy)*(cx - bx);
	double c = (ax - bx)*(cy - ay) + (ay - by)*(ax - cx), d = (ax - bx)*(dy - ay) + (ay - by)*(ax - dx);
	return c * d < 0 && a*b < 0;
}

int main() {
  int ax, ay, bx, by;
  cin >> ax >> ay >> bx >> by;
  int n;
  cin >> n;
  P sv1 = {ax, ay};
  P sv2 = {bx, by};
  
  vector<int> x(n), y(n);

  rep(i, n) cin >> x[i] >> y[i];
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    P pre;
    if(i == 0) pre = {x[n - 1], y[n - 1]};
    else pre = {x[i - 1], y[i - 1]};
    P cur = {x[i], y[i]};

    if(cross(pre.x, pre.y, cur.x, cur.y, sv1.x, sv1.y, sv2.x, sv2.y)) ans++;
  }
  ans /= 2;
  ans++;
  cout << ans << endl;

}