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
  bool ok = false;
  rep(i, 3) {
    int t = n % 10;
    if(t == 7) ok = true;
    n /= 10;
  }
  cout << (ok ? "Yes" : "No") << endl;
}