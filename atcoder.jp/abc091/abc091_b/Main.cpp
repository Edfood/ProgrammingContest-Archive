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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)





int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  int m;
  cin >> m;
  vector<string> t(m);
  rep(i, m) cin >> t[i];
  set<string> str;

  int ans = 0;
  for(int i = 0; i < n; ++i){
    int sum = 0;

    auto itr = str.find(s[i]);
    if(itr == str.end()){
      str.insert(s[i]);
      for(int j = 0; j < n; ++j){
        if(s[i] == s[j]){
          sum++;
        }
      }
      for(int j = 0; j < m; ++j){
        if(s[i] == t[j]){
          sum--;
        }
      }
    }

    ans = max(ans, sum);
  }
  if(ans < 0) ans = 0;
  cout << ans << endl;
}
