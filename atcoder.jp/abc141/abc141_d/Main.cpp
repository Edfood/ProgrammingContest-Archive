#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  priority_queue<int> q;
  rep(i, n) {
    int a;
    cin >> a;
    q.push(a);
  }

  rep(i, m) {
    int t = q.top(); q.pop();
    t /= 2;
    q.push(t);
  }

  ll ans = 0;
  
  while (!q.empty()) {
    ans += q.top();
    q.pop();
  }
  cout << ans << endl;

}