#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int test;
  cin >> test;
  rep(ti, test) {
    string t;
    cin >> t;
    
    bool ok = true;
    char c = t[0];
    rep(i, t.length()) {
      if (t[i] != c) ok = false;
    }
    if(ok) {
      rep(i, t.length()) cout << c;
    } else {
      rep(i, t.length() * 2) {
        if(i % 2) cout << '0';
        else cout << '1';
      }
    }
    cout << endl;

  }
}