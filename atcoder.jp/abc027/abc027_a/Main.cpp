#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int ans;
  if(a == b) ans = c;
  else if(b == c) ans = a;
  else ans = b;
  cout << ans << endl;
}