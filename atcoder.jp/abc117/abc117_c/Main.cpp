#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> x(m);
  rep(i, m) cin >> x[i];
  int ans = 0;
  vector<int> d(m - 1);

  sort(x.begin(), x.end());

  for(int i = 1; i < m; ++i) {
    d[i - 1] = abs(x[i] - x[i - 1]);
    
  }
  sort(d.begin(), d.end());

  for (int i = 0; i < m - n; ++i) {
    ans += d[i];
  }
  cout << ans << endl;
}