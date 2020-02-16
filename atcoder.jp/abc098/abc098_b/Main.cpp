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
  string s;
  cin >> n >>s;
  int ans = 0;
  for(int i = 1; i < n; ++i){
    int count = 0;
    vector<int> a(26), b(26);
    for(int l = 0; l < i; ++l){
      a[s[l] - 'a']++;
    }
    for(int r = i; r < n; ++r){
      b[s[r] - 'a']++;
    }
    rep(j, 26){
      if(a[j] > 0 && b[j] > 0)  count++;
    }
    ans = max(ans, count);
  }
  cout << ans << endl;
}
