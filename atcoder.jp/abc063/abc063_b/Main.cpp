#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  bool ans = true;
  for(char a = 'a'; a <= 'z'; ++a){
    int count = 0;
    rep(i, s.length()){
      if(s[i] == a) count++;
    }
    if(count >= 2)  ans = false;
  }
  if(ans) cout << "yes" << endl;
  else cout << "no" << endl;
}