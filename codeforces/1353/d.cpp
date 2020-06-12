#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


void solve() {
  
  int n;
  cin >> n;
  vector<int> a(n, 0);
  priority_queue<tuple<int, int, int>> q;

  int cnt = 1;
  auto push = [&](int l, int r) {
    int len = r - l;
    l = -l;
    r = -r;
    q.push(tie(len, l, r));
  };
  
  push(0, n);
  while (!q.empty()) {
    int len, l, r;
    tie(len, l, r) = q.top(); q.pop();
    l = -l;
    r = -r;
    if(l >= r) continue;
    

    int mid = (l + r) / 2;
    if ((r - l) % 2 == 0) mid -= 1;
    a[mid] = cnt;

    cnt++;
      if (l != mid) push(l, mid);
      if (r != mid) push(mid + 1, r);
  }

  rep(i, n) printf("%d%c", a[i], (i == n - 1 ? '\n' : ' '));


}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
}