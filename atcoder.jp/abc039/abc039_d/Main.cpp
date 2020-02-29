#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  vector<string> ans = s;
  rep(i, h){
    rep(j, w){
      if(s[i][j] == '.'){
        for(int dx = -1; dx <= 1; ++dx){
          for(int dy = -1; dy <= 1; ++dy){
            if(i + dx >= 0 && i + dx < h && j + dy >= 0 && j + dy < w){
              ans[i + dx][j + dy] = '.';
            }
          }
        }
      }
    }
  }
  vector<string> comparison = ans;
  rep(i, h){
    rep(j, w){
      if(ans[i][j] == '#'){
        for(int dx = -1; dx <= 1; ++dx){
          for(int dy = -1; dy <= 1; ++dy){
            if(i + dx >= 0 && i + dx < h && j + dy >= 0 && j + dy < w){
              comparison[i + dx][j + dy] = '#';
            }
          }
        }
      }
    }
  }

  bool ok = true;
  rep(i, h){
    rep(j, w){
      if(s[i][j] != comparison[i][j]) ok = false;
    }
  }
  if(ok){
    cout << "possible" << endl;
    rep(i, h){
      printf("%s\n", ans[i].c_str());
    }
  } else {
    cout << "impossible" << endl;
  }
}