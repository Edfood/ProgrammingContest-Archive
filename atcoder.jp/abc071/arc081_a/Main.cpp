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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  vector<ll>  ans;
  int count = 0;
  rep(i, n - 1){
    if(a[i] == a[i + 1]){
      ans.push_back(a[i]);
      count++;
      i++;
    }
  }
  if(count >= 2)  cout << ans[0] * ans[1] << endl;
  else cout << 0 << endl;
}
