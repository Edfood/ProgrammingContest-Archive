#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int x = 0, y = 0;
  string s;
  int t;
  cin >> s >> t;
  int count = 0;
  rep(i, s.length()){
    if(s[i] == 'L') --x;
    if(s[i] == 'R') ++x;
    if(s[i] == 'U') ++y;
    if(s[i] == 'D') --y;
    if(s[i] == '?'){
      ++count;
    }
  }
  int ans = abs(x) + abs(y);
  rep(i, count){
    if(t == 2) {
      if(ans == 0) ans++;
      else ans--;
    } else {
      ans++;
    }
  }
  cout << ans << endl;
}