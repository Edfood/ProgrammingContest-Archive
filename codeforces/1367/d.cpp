#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;



void solve() {
  string s;
  cin >> s;
  int m, n;
  n = s.size();
  cin >> m;
  vector<int> b(m);
  rep(i, m) cin >> b[i];
  vector<int> ch(26);
  rep(i, n) ch[s[i] - 'a']++;
  
  queue<int> q;
  string ans = string(m, 'a');
  vector<bool> used(m, false);

  // 0の場所を数えて返す
  auto getZeroIndex = [&] {
    vector<int> res;
    rep(i, m) {
      if (used[i]) continue;
      int sum = 0;
      rep(j, m) if (used[j]) sum += abs(i - j);
      int value = b[i] - sum;
      if (value == 0) {
        res.push_back(i);
      }
    }
    return res;
  };

  // 終了チェック
  auto check = [&] {
    bool ok = true;
    rep(i, m) if(!used[i]) ok = false;
    return ok;
  };

  int cur = 25;
  while (true) {

    if (check()) break;
    auto res = getZeroIndex();
    while (cur >= 0) {
      if (ch[cur] >= res.size()) {
        break;
      }
      cur--;
    }
    for (int index : res) {
      ans[index] = 'a' + cur;
      used[index] = true;
    }
    cur--;
  }

  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}