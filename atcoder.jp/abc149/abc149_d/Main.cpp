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
int n, k, r, s, p;

char f(char x){
  if(x == 'r'){
    return 'p';
  } else if(x == 's'){
    return 'r';
  } else {
    return 's';
  }
}
char win;
char next_win;
bool judge(char x){
  if(win != x && next_win != x) return true;
  else return false;
}

int main(){
  
  string t;
  cin >> n >> k >> r >> s >> p;
  cin >> t;

  ll ans = 0;
  vector<char> a(n);

  map<char, int> scores;
  scores['p'] = p;
  scores['r'] = r;
  scores['s'] = s;

  for(int i = 0; i < n; ++i){

    win = f(t[i]);

    if(i >= k){
      if(a[i - k] == win){
        if(i + k < n){
          next_win = f(t[i + k]);

          if(judge('p'))  a[i] = 'p';
          if(judge('r'))  a[i] = 'r';
          if(judge('s'))  a[i] = 's';
        }

      } else {

        ans += scores[win];
        a[i] = win;

      }
    } else {
      a[i] = win;

      ans += scores[win];
    }
  }

  cout << ans << endl;

}