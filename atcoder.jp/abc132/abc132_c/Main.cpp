#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  rep(i, n) cin >> d[i];
  sort(d.begin(), d.end());
  if(n % 2) {
    cout << 0 << endl;
    return 0;
  }
  int diff = d[n / 2] - d[n / 2 - 1];
  cout << diff << endl;
}