#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int popcnt(int x) {
  return __builtin_popcountll(x);
}

int f(int x) {
  if (x == 0) return 0;
  return f(x % popcnt(x)) + 1;
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> x(n);
  rep(i, n) x[i] = s[i] - '0';

  vector<int> ans(n);
  int pc = 0;
  rep(i, n) pc += x[i];

  rep(b, 2) {
    int npc = pc;
    if (b == 0) npc++;
    else npc--;
    if (npc <= 0) continue;
    int sum = 0;

    rep(i, n) {
      sum = (sum * 2) % npc;
      sum += x[i];
    }
    
    int base = 1;

    for (int i = n - 1; i >= 0; --i) {
      if (x[i] == b) {
        int cur = sum;

        if (x[i] == 0) cur = (sum + base) % npc;
        else cur = (sum - base + npc) % npc;
        ans[i] = f(cur) + 1;
      }

      (base *= 2) %= npc;
    }
  }

  rep(i, n) cout << ans[i] << endl;
}