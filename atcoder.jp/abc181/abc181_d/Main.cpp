#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

vector<int> cnt(10);
set<string> st;

vector<int> baisu;

int main() {
  int n;
  string s;
  cin >> s;
  n = s.size();
  if (n <= 2) {
    int v = stoi(s);
    reverse(s.begin(), s.end());
    int r = stoi(s);
    if (v % 8 == 0 || r % 8 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < 1000; i++) {
    if (i % 8 != 0) continue;
    baisu.push_back(i);
  }

  rep(i, n) {
    int c = s[i] - '0';
    cnt[c]++;
  }

  for (auto eight : baisu) {
    vector<int> t(10);
    int kaisu = 0;
    while (eight > 0) {
      t[eight % 10]++;
      eight /= 10;
      kaisu++;
    }
    t[0] += 3 - kaisu;

    bool ok = true;
    rep(i, 10) {
      if (t[i] > cnt[i]) ok = false;
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  if (cnt[0] >= 3) cout << "Yes" << endl;
  else cout << "No" << endl;
}