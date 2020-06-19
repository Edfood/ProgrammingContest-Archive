#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vector<int> cnt(26);
  rep(i, n) cnt[s[i] - 'a']++;

  // ネックレスの長さを探索
  for (int len = n; len >= 1; --len) {
    vector<int> cycles;       // 周期kで移動した時にできるサイクルのそれぞれが持つ要素数
    vector<int> used(len);
    rep(i, len) {
      if (used[i]) continue;  // 計算済み

      cycles.push_back(1);
      used[i] = true;
      int j = (i + k) % len;

      // サイクルの要素数を数える
      while (!used[j]) {
        cycles.back()++;
        used[j]++;
        (j += k) %= len;
      }
    }

    vector<int> cur_cnt = cnt;
    sort(cycles.begin(), cycles.end());
    sort(cur_cnt.begin(), cur_cnt.end());

    bool ok = true;
    // 入力で与えられたビーズを条件を満たすように分配できるかチェック
    while (!cycles.empty()) {
      if (cycles.back() > cur_cnt.back()) {
        ok = false;
        break;
      } else {
        cur_cnt.back() -= cycles.back();
        cycles.pop_back();
        sort(cur_cnt.begin(), cur_cnt.end());
      }
    }

    if (ok) {
      cout << len << endl;
      return;
    }
  }

}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}