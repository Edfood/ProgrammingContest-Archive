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
typedef pair<ll,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
const int INF = 1001001001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int f(int x) {
  int res = 0;
  while (x%2 == 0) {
    res++;
    x /= 2;
  }
  return res;
}

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i] /= 2;
  }
  int t = f(a[0]);
  rep(i, n) {
    if(t != f(a[i])) {
      puts("0");
      return 0;
    }
    a[i] >>= t;
  }
  m >>= t;

  int l = 1;
  rep(i, n) {
    l = lcm(l, a[i]);
    if (l > m) {
      puts("0");
      return 0;
    }
  }
  int ans = m / l;
  ans = (ans + 1) / 2;
  cout << ans << endl;

}