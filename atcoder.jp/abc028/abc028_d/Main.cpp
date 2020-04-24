#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  double n, k;
  cin >> n >> k;
  double all = pow(n, 3);
  double ans = (k - 1) * (n - k) * 6 + 3 * (n - 1) + 1;
  ans /= all;
  printf("%.09f\n", ans);
}