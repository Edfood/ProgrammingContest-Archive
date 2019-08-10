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
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;


int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n){
    cin >> s[i];
  }

  for(int i = 0; i < n; ++i){
    sort(s[i].begin(), s[i].end());
  }
  sort(s.begin(), s.end());
  
  ll ans = 0;
  string pre = s[0];
  int count = 0;
  int i = 1;
  while(i < s.size()){
    if(s[i] == pre){
      count++;
    } else {
      for(int j = 1; j <= count ; ++j){
        ans += j;
      }
      pre = s[i];
      count = 0;
    }
    ++i;
  }

  if(count != 0){
    for(int j = 1; j <= count ; ++j){
        ans += j;
      }
  }
  cout << ans << endl;
  
}
