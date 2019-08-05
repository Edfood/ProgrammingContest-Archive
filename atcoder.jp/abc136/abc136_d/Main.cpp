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
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;

int main(){
  int n;
  string s;
  cin >> s;
  n = s.size();
  vector<int> ans(n);
  rep(ri, 2){
    int cnt = 0;
    rep(i, n){
      if(s[i] == 'R') cnt++;
      else {
        ans[i - 1] += (cnt + 1) / 2;
        ans[i] += cnt / 2;
        cnt = 0;
      }
    }

    reverse(ans.begin(), ans.end());
    reverse(s.begin(), s.end());
    rep(i, n){
      if(s[i] == 'L') s[i] = 'R';
      else s[i] = 'L';
    }
  }

  rep(i, n){
    printf("%d%c", ans[i], i == n - 1? '\n': ' ');
  }
}
