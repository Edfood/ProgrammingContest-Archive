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
  vector<int> a(n);
  rep(i, n){
    int t;
    cin >> t;
    t++;
    a[i] = t;
  }
  vector<int> res(100005);
  rep(i, n){
    int t = a[i];
    res[t - 1]++;
    res[t]++;
    res[t + 1]++;
  }
  sort(res.begin(), res.end());
  reverse(res.begin(), res.end());
  cout << res[0] << endl;
}
