#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  int ans = -1;
  bool can_ans = false;
  int a = 0;
  int z = 0;
  for(int i = 0; i < s.length(); ++i){
    if(s[i] == 'A'){
      a = i;
      break;
    }
  }
  rep(i, s.length()){
    if(s[i] == 'Z'){
      z = i;
    }
  }
  cout << z - a + 1 << endl;
}