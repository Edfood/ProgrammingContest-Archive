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
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;

int main(){
  string up, down;
  cin >> up;
  cin >> down;
  if(up[0] == down[2] && up[1] == down[1] && up [2] == down[0]) cout << "YES" << endl;
  else cout << "NO" << endl;
}
