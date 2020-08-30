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
  int n, k;
  cin >> n >> k;

  if (n % (k + 1) == 1) cout << "Lose" << endl;
  else cout << "Win" << endl; 
}

int main() {
  int p;
  cin >> p;
  rep(i, p) solve();
}