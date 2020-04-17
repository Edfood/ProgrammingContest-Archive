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
  bool ok = true;
  int n = s.length();
  rep(i, n) {
    if(i % 2 == 0) {
      if(s[i] == 'L') ok = false;
    } else {
      if(s[i] == 'R') ok = false;
    }
  }
  cout << (ok ? "Yes" : "No") << endl;
}