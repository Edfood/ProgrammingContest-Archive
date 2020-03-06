#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  double n, m;
  cin >> n >> m;
  if(n >= 12) n -= 12;
  double hour = 360 / 12;
  double minute = 360 / 60;
  n *= hour;
  m = minute * m;
  n += m / 12;
  
  double ans =  abs(n - m);

  if(ans > 180) ans = 360 - ans;
  printf("%.4f\n", ans);
}