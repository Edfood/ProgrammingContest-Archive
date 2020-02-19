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
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;


int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) {
    int t;
    cin >> t;
    t--;
    a[i] = t;
  }
  vector<bool> used(n);
  int it = 0;
  int ans = 0;
  while(true){
    if(it == 1) {
      cout << ans << endl;
      return 0;
    }
    if(used[it]){
      cout << -1 << endl;
      return 0;
    }
    used[it] = true;
    it = a[it];
    ans++;
  }
}
