#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

void solve() {
  string s;
  cin >> s;
  int alice = 0;

  int n = s.length();
  int cur = 0;
  priority_queue<int> q;
  rep(i, n) {
    if (s[i] == '1') cur++;
    else {
      q.push(cur);
      cur = 0;
    }
  }
  q.push(cur);

  for (int i = 0; !q.empty(); ++i) {
    int v = q.top(); q.pop();
    if (i % 2 == 0) alice += v;
  }
  cout << alice << endl;
}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}