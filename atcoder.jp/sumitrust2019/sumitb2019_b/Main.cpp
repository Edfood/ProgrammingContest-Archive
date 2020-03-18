#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  ll ans = -1;
  for(int i = 1; i < 500000; ++i) {
    int a = i * 1.08;
    if(a == n) ans = i;
  }
  if(ans == -1) cout << ":(" << endl;
  else cout << ans << endl;
}