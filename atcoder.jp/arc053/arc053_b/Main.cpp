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
  vector<char> ch(26);
  rep(i, n) ch[s[i] - 'a']++;
  int cnt = 0;
  rep(i, 26) if(ch[i] % 2) {
    cnt++;
  }

  if (cnt <= 1) cout << n << endl;
  else {
    n -= cnt;
    int minv = n / cnt;
    if(minv % 2) minv--;
    minv++;
    cout << minv << endl;;
  }

}