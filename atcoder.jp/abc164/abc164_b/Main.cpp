#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int cnt = 0;
  while(1) {
    if(cnt % 2 == 0) {
      c -= b;
      if(c <= 0) {
        cout << "Yes" << endl;
        return 0;
      }
    } else {
      a -= d;
      if(a <= 0) {
        cout << "No" << endl;
        return 0;
      }
    }
    cnt++;
  }
}