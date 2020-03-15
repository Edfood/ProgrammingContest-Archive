#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b, c, k;
  int s, t;
  cin >> a >> b >> c >> k >> s >> t;
  int ans = a * s + b * t;
  if(s + t >= k) ans -= (s + t) * c;
  cout << ans << endl;
}