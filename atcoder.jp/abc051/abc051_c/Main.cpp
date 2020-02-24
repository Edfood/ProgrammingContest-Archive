#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

string nav(int diffx, int diffy){
  string res = "";
  rep(i, diffy){
    res += "U";
  }
  rep(i, diffx){
    res += "R";
  }
  return res;
}
string nav_rev(int diffx, int diffy){
  string res = "";
  rep(i, diffy){
    res += "D";
  }
  rep(i, diffx){
    res += "L";
  }
  return res;
}

int main(){
  string ans = "";
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  int diffx = abs(tx - sx), diffy = abs(ty - sy);
  ans = nav(diffx, diffy);
  ans += nav_rev(diffx, diffy);
  ans += "L";
  ans += nav(diffx + 1, diffy + 1);
  ans += "D";
  ans += "R";
  ans += nav_rev(diffx + 1, diffy + 1);
  ans += "U";
  cout << ans << endl;
}