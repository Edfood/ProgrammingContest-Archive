#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  string s, t;
  cin >> s >> t;
  if (s == "Y") {
    rep(i, t.size()) {
      t[i] = t[i] - 'a' + 'A';
    }
  }
  cout << t << endl;
}