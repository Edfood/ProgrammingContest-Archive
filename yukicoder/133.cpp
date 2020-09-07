#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  double ans = 0;
  double all = 0;
  sort(a.begin(), a.end());
  
  do {

    int cnt = 0;
    
    rep(i, n) {
      if (a[i] > b[i]) cnt++;
    }
    if (cnt > n / 2) ans++;
    all++;

  } while (next_permutation(a.begin(), a.end())); 

  ans /= all;
  cout << ans << endl;
}