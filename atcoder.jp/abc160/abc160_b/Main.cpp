#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int x;
  cin >> x;
  ll ans = 0;
  ans = x / 500 * 1000;
  x %= 500;
  ans += x / 5 * 5;
  cout << ans << endl;
}