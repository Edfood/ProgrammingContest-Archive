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
  ll m = 0,  c = -INF;
  double y = 0;
  rep(i, n) {
    ll x;
    cin >> x;
    x = abs(x);
    m += x;
    y += x * x;
    c = max(c, x);
  } 

  y = sqrt(y);
  cout << m << endl;
  printf("%.12f\n", y);
  cout << c << endl;
  
}