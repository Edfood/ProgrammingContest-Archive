#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> b(n - 1);
  int ans = 0;
  rep(i, n - 1)  cin >> b[i];
  ans += b[0];
  for(int i = 0; i < n - 2; ++i) {
    ans += min(b[i], b[i + 1]);
  }
  ans += b[n - 2];
  cout << ans << endl;
}