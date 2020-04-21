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
  ll s;
  bool ans = false;
  rep(i, n) {
    int a;
    cin >> a;
    if(a % 2) ans = true;
  }
  if(ans) cout << "first" << endl;
  else cout << "second" << endl;
}