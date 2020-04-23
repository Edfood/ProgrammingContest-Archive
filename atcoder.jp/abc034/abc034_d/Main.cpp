#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int MAXN = 1000;
const int MAXK = 1000;
const int MAXP = 100;


int main() {
  int n, k;
  cin >> n >> k;
  vector<double> w(n), p(n);
  rep(i, n) {
    cin >> w[i] >> p[i];
  }
  double l = 0, r = 100;
  rep(_, 20000) {
    double middle = (l + r) / 2;
    vector<double> t(n);
    rep(i, n) t[i] = w[i] * (p[i] - middle);
    sort(t.rbegin(), t.rend());
    double sum = 0;
    rep(i, k) sum += t[i];
    if(sum >= 0.0) l = middle;
    else r = middle;
  }
  printf("%.12f\n", l);
}