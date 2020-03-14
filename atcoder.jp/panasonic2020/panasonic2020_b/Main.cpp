#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll h, w;
  cin >> h >> w;
  
  ll ans = ((w + 1) / 2) * ((h + 1) / 2);
  ans += (w / 2) * (h / 2);
  if(h == 1 || w == 1) ans = 1;
  cout << ans << endl;
}