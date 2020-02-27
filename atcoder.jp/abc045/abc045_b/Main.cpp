#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  vector<string> s(3);
  cin >> s[0] >> s[1] >> s[2];
  char ans;
  char now = 'a';
  while(true){
    bool flag = false;
    rep(i, 3){
      if(s[i].length() <= 0 && now == i + 'a'){
        ans = 'A' + i;
        flag = true;
        break;
      }
    }
    if(flag) break;
    rep(i, 3){
      if(now == 'a' + i){
        now = s[i][0];
        s[i] = s[i].erase(0, 1);
        break;
      }
    }
  }
  cout << ans << endl;

}