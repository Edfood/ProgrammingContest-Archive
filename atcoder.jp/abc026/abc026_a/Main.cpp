#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a;
  cin >> a;
  int ans = 0;
  for(int i = 1; i <= a / 2; ++i) {
    ans = max(ans, i * (a - i));
  }
  cout << ans << endl;
}