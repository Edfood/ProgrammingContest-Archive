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
  cin >> n;
  deque<int> q;
  rep(i, n) {
    int a;
    cin >> a;
    if(i % 2) q.push_front(a);
    else q.push_back(a);
  }
  if(n % 2) reverse(q.begin(), q.end());

  for (auto it = q.begin(); it != q.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}