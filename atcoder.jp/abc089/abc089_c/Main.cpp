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
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  map<char, ll> cnt;
  string march = "MARCH";

  int num = 0;

  rep(i, n){
    cin >> s[i];
  }

  rep(i, 5) {
    cnt[march[i]] = 0;
  }

  rep(i, n){
    cnt[s[i][0]]++;
  }

  rep(i, 5){
    if(cnt[march[i]] != 0) {
      num++;
    }
  }
  ll ans = 0;

  if(num >= 3) {
    for(int i = 0; i < 5; ++i){
      for(int j = i + 1; j < 5; ++j){
        for(int k = j + 1; k < 5; ++k){

          ans += cnt[march[i]] * cnt[march[j]] * cnt[march[k]];

        }
      }
    }
  }

  cout << ans << endl;

}
