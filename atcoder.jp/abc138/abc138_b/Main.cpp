#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<double> a(n);
  rep(i, n) cin >> a[i];
  double ans = 0;
  rep(i, n) {
    ans += 1 / a[i];
  }
  printf("%.5f\n", 1 / ans);
}