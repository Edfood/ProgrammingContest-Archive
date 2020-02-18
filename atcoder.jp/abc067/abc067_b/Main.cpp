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
  int n, k;
  cin >> n >> k;
  vector<int> l(n);
  rep(i, n) cin >> l[i];
  sort(l.begin(), l.end());
  reverse(l.begin(), l.end());
  int ans = 0;
  rep(i, k) ans += l[i];
  cout << ans << endl;
}
