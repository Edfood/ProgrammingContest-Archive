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
typedef pair<ll,int> p;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int cnt = 0;
  string ans  = s;
  rep(i, n) {
    if(s[i] == '(') cnt++;
    else {
      if(cnt == 0) ans = "(" + ans;
      else cnt--;
    }
  }
  ans += string(cnt, ')');
  cout << ans << endl;
}
