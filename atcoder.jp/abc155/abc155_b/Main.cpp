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
#include<deque>
#include<cassert>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  bool ans = true;
  rep(i, n) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      if(!(a % 3 == 0 || a % 5 == 0)) ans = false;
    }
  }
  if(ans) cout << "APPROVED" << endl;
  else cout << "DENIED" << endl;
}