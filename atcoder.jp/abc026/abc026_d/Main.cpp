#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


int main() {
  double a, b, c;
  cin >> a >> b >> c;
  double l = -201, r = 201;

  rep(i, 2000000) {
    
    double t = (l + r) / 2;
    auto f = [&](double t) {
      return a * t + b * sin(c * t * M_PI);
    };
    double res = f(t);
    if(res >= 100) r = t; 
    else l = t;
  }
  printf("%.10f\n", l);
}
