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
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  for (int i = n - 2; i >= 0; --i) {
    if (a[i] > a[i + 1]) a[i]--;
  }
  bool ok = true;
  for (int i = 0; i < n - 1; ++i){
    if (!(a[i] <= a[i + 1])) ok = false;
  }
  
  cout << (ok ? "Yes" : "No") << endl;
}