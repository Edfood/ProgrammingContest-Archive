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
const int MAXV =  3502;

int main() {
  int n;
  cin >> n;
  vector<pair<pair<string, int>, int>> p(n);
  rep(i, n) {
    string a;
    int v;
    cin >> a >> v;
    p[i] = make_pair(make_pair(a, -v), i);
  }
  sort(p.begin(), p.end());
  rep(i, n) {
    cout << p[i].second + 1 << endl;
  }
}