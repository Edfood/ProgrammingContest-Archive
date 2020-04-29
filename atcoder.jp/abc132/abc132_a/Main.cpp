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
  vector<int> ch(26);
  rep(i, s.length()) {
    ch[s[i] - 'A']++;
  }
  bool ans = true;
  rep(i, 26) {
    if(!(ch[i] == 2 || ch[i] == 0)) ans = false;
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}