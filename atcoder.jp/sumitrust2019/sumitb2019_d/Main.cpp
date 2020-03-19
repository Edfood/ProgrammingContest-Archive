#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

string extraction(int x) {
  string res;
  rep(i, 3) {
    res.push_back(x % 10 + '0');
    x /= 10;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main(){
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i = 0; i < 1000; ++i) {
    int count = 0;
    string t = extraction(i);
    rep(j, n) {
      if(count == 3) break;
      if(s[j] == t[count]) count++;
    }
    if(count == 3) ans++;
  }
  cout << ans << endl;
}