#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
#include<set>
#include<iomanip>
#include<map>
#include<type_traits>
#include<tuple>
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
  rep(i, h){
    rep(j, w){
      if(s[i][j] == '#')  continue;
      int count = 0;
      for(int left = -1; left <= 1; ++left){
        for(int up = -1; up <= 1; ++up){
          if(i + left >= 0 && i + left < h && up + j >= 0 && up + j < w && s[i + left][j + up] == '#'){
            count++;
          }
        }
      }
      s[i][j] = '0' + count;
    }
  }
  rep(i, h) cout << s[i] << endl;
}
