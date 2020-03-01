#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> s(m), c(m);
  rep(i, m){
    cin >> s[i] >> c[i];
  }


  string ans = "";
  rep(i, 1000){
    int count = 0;
    int tmp = i;
    if(i == 0){
      count = 1;
    }else {
      while(tmp > 0){
        tmp /= 10;
        count ++;
      }
    }

    if(count != n) continue;
    bool ok = true;
    ans = to_string(i);
    
    rep(i, m){
      if(ans[s[i] - 1] - '0' != c[i]) ok = false;
    }
    if(ok){
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}