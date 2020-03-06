#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, d;
  cin >> a >> d;
  int ans;
  if (a < d) ans = (a + 1)  * d;
  else ans = a * (d + 1);
  cout << ans << endl;
}