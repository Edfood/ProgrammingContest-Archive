#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int k, a, b;
  cin >> k >> a >> b;
  for(int i = a; i <= b; ++i) {
    if (i % k == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
}