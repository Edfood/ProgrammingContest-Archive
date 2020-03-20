#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
vector<int> a, b, c, d;

void memorize(int aa, int bb, int cc, int dd) {
  a.push_back(aa + 1);
  b.push_back(bb + 1);
  c.push_back(cc + 1);
  d.push_back(dd + 1);
}

int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<int>> av(h, vector<int>(w));
  rep(i, h)rep(j, w) cin >> av[i][j];
  int cur = 0;

  rep(i, h) {
    cur %= 2;
    if(i % 2 == 0) {
      for (int j = 0; j < w; ++j) {
        if(i == h - 1 && j == w - 1) break;
        cur += av[i][j];
        if(!(cur % 2)) continue;
        if(j == w - 1) {
          memorize(i, j, i + 1, j);
        } else {
          memorize(i, j, i, j + 1);
        }
      }
    } else {
      for (int j = w - 1; j >= 0; --j){
        if(i == h - 1 && j == 0) break;
        cur += av[i][j];
        if(!(cur % 2)) continue;
        if(j == 0) {
          memorize(i, j, i + 1, j);
        } else {
          memorize(i, j, i, j - 1);
        }
      }
    }
  }

  cout << a.size() << endl;
  rep(i, a.size()) {
    cout << a[i] << ' ' << b[i] << ' ' << c[i] << ' ' << d[i] << endl;
  }
}