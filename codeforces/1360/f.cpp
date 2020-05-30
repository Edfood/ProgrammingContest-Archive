#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

//  最初の文字列と１文字違いの文字列を作って、他の文字列との比較を全探索
void solve() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n);
  rep(i, n) cin >> a[i];
  string s = a[0];

  rep(i, m) {  // 最初の文字列と同じ or １文字違いの文字列を作る
    char save = s[i];
    rep(j, 26) {
      bool ok = true;
      char c = 'a' + j;
      s[i] = c;

      // すべての文字列と違う部分が２つ以上ないかチェック
      rep(k, n) {
        int cnt = 0;
        rep(l, m) {
          if (s[l] != a[k][l]) cnt++;
          if (cnt > 1) {
            ok = false;
            break;
          }
        }
      }

      if (ok) { // 作った文字列が条件を満たすなら出力
        cout << s << endl;
        return;
      }

      s[i] = save;
    }
  }
  cout << -1 << endl;
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}