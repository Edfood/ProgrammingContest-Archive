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
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
const int mod = 2019;
const int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  int n = s.length();
  ll mul = 1;
  vector<int> cnt(mod);
  int sum = 0;
  int ans = 0;
  rep(i, n) {
    cnt[sum]++;
    (sum += (s[i] - '0') * mul) %= mod;
    ans += cnt[sum];    
    (mul *= 10) %= mod;
  }

  cout << ans << endl;

}