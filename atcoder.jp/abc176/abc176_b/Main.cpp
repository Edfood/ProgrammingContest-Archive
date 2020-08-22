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
  string s;
  cin >> s;
  ll cur = 0;
  rep(i, s.length()) {
    cur += s[i] - '0';
  }
  if (cur % 9 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}