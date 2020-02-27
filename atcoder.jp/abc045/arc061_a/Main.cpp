#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  int n = s.length();
  ll ans = 0;
  for(int bit = 0; bit < (1 << n - 1); bit++){
    string num = "";
    rep(i, n){
      num += s[i];
      if(bit >> i & 1){
        ans += stoll(num);
        num = "";
      }
    }
    if(num != "") ans += stoll(num);
  }
  cout << ans << endl;
}