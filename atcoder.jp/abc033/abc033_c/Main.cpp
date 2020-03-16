#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.length(); i += 2) {
    if(i == s.length() - 1) {
      if(s[i] != '0') ans++;
      break;
    }

    if(s[i + 1] == '+') {
      if (s[i] != '0') ++ans;
    }
    else {
      bool check = true;
      while(1) {
        if(s[i] == '0') check = false;
        if(i >= s.length() - 1 || s[i+1] != '*') break;
        i += 2;
      }
      if (check) ans++;
    }

  }
  cout << ans << endl;
}