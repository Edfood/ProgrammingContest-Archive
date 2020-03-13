#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  double ans = a[0];
  for(int i = 1; i < n; ++i) {
    ans += a[i];
    ans /= 2;
  }
  printf("%.5f\n", ans);
}