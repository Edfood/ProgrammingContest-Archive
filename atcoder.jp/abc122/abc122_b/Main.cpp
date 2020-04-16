#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  set<char> st;
  st.insert('A');
  st.insert('C');
  st.insert('G');
  st.insert('T');

  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.length()) {
    int cnt = 0;
    for (int j = i; j < s.length(); ++j) {
      if(st.find(s[j]) == st.end()) break;
      cnt++;
    }
    chmax(ans, cnt);
  }
  cout << ans << endl;
}