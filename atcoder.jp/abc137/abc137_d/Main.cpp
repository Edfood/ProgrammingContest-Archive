#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;
  sort(a.begin(), a.end());
  int cur = 0;
  int ans = 0;

  priority_queue<int> q;
  for (int i = 1; i <= m; ++i) {
    while (cur < n && a[cur].first <= i) {
      q.push(a[cur].second);
      ++cur;
    }
    if(!q.empty()) {
      ans += q.top();
      q.pop();
    }
  }
  cout << ans << endl;
}