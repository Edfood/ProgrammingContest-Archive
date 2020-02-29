#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  vector<string> ans = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
  int i;
  for(i = 2; i < s.length() - 2; ++i){
    if(s[i - 2] == 'B' && s[i] == s[i - 2] && s[i] == s[i + 2]){
      i--;
      break;
    }
  }
  int itr = 5;
  for(; i >= 0; --i){
    if(s[i] == 'W'){
      if(itr == 0) itr = ans.size() - 1;
      else itr--;
    } 
  }
  cout << ans[itr] << endl;
}