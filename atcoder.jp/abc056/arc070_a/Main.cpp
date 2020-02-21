#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int x;
  cin >> x;
  int cur = 0;
  int ans = 0;
  int i;
  for(i = 1; ; ++i){
    cur += i;
    ans++;
    if(cur >= x) break;
  }
  cout << ans << endl;
}