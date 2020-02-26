#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  int ans = 10000000;
  rep(j, 2){
    int count = 0;
    char pre = 'a';
    rep(i, s.length()){
      if(s[i] != pre){
        count++;
        pre = s[i];
      }
    }
    ans = min(ans, count);
    reverse(s.begin(), s.end());
  }
  ans--;

  cout << ans << endl;
  
}