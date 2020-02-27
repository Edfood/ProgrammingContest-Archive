#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s, ans = "";
  cin >> s;
  rep(i, s.length()){
    if(s[i] == 'B' && ans != ""){
      ans = ans.erase(ans.length() - 1, 1);
    } 
    if(s[i] == '0' || s[i] == '1'){
      ans += s[i];
    }
  }
  cout << ans << endl;
}
