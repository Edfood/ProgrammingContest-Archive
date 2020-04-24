#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  vector<char> upper(26);
  vector<char> lower(26);
  rep(i, 26) {
    upper[i] = 'A' + i;
    lower[i] = 'a' + i;
  }
  rep(i, n) {
    if(i == 0) {
      if('a' <= s[i] && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
    } else {
      if('A' <= s[i] && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
    }
  }
  cout << s << endl;
}