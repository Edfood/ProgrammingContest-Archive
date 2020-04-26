#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  string s, t;
  cin >> s >> t;
  bool ans = false;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());

  if(s < t || (s.length() < t.length() && s == t)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}