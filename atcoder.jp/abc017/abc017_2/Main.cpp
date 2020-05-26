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
  bool ans = true;
  string choku = "choku";
  int m = choku.length();
  rep(i, n) {
    char c = s[i];
    bool ok = false;
    rep(j, m) {
      if (c == choku[j]) ok = true;
    }
    if (!ok) ans = false;
  }

  rep(i, n - 1) {
    char c = s[i];
    char next = s[i + 1];
    if (c == 'c' && next != 'h') ans = false;
  }
  for (int i = n - 1; i >= 1; --i) {
    char c = s[i];
    char next = s[i - 1];
    if (c == 'h' && next != 'c') ans = false;
  }
  if (s.back() == 'c') ans = false;
  if (s[0] == 'h') ans = false;
  cout << (ans ? "YES" : "NO") << endl;
}