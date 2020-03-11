#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> r(n);
  rep(i, n) cin >> r[i];
  sort(r.begin(), r.end());
  reverse(r.begin(), r.end());
  double ans;
  for (int i = 0; i < n; ++i) {
    double area = M_PI * r[i] * r[i];
    if (i % 2 == 0) {
      ans += area;
    } else ans -= area;
  }
  printf("%.9lf\n", ans);
}