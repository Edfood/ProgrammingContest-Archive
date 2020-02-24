#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int k, s;
  cin >> k >> s;
  int ans = 0;
  for(int x = 0; x <= k; ++x){
    for(int y = 0; y <= k; ++y){
      int diff = s - x - y;
      if(diff >= 0 && diff <= k) ans++;
    }
  }
  cout << ans << endl;
}