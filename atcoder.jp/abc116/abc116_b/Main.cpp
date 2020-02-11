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
  int s;
  cin >> s;
  set<int> S;
  S.insert(s);
  int before = s;
  for(int i = 2; i <= 1000001; ++i){
    if(before % 2) s = 3 * before + 1;
    else s = before / 2;
    auto it = S.find(s);
    if(it != S.end()) {
      cout << i << endl;
      return 0;
    }
    S.insert(s);
    before = s;
  }

}