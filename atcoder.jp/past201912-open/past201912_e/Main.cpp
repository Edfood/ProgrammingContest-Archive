#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n, q;
  cin >> n >> q;
  vector<vector<bool>> v(n, vector<bool>(n, false));

  rep(qi, q) {
    int query;
    cin >> query;

    int a;
    cin >> a;
    --a;

    if (query == 1) {

      int b;
      cin >> b;
      --b;

      v[a][b] = true;

    } else if (query == 2) {

      rep(i, n) {
        if (v[i][a]) v[a][i] = true;
      }
      
    } else {
      
      vector<bool> memo = v[a]; // メモしておかないと途中でv[a]の値が書き換わってしまって、バグる
      
      rep(i, n) {
        if (memo[i]) {
          rep(j, n) {
            if (v[i][j] && j != a) v[a][j] = true;
          }
        }
      }

    }
  }

  rep(i, n) {
    rep(j, n) {
      cout << (v[i][j] ? "Y" : "N");
    }
    cout << endl;
  }
}