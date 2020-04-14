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
const int INF = 1001001001;

int f(int x) {
  while (x % 2 == 0) {
    x /= 2;
  }
  return x;
}

int main() {
  int n;
  cin >> n;
  set<int> st;
  rep(i, n) {
    int a;
    cin >> a;
    st.insert(f(a));
  }
  cout << st.size() << endl;
}
