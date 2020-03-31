#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main() {
  int n, s, t;
  cin >> n >> s >> t;
  int w;
  cin >> w;
  int cnt = 0;
  if(s <= w && w <= t) ++cnt;
  rep(i, n - 1) {
    int a;
    cin >> a;
    w += a;
    if(s <= w && w <= t) ++cnt;
  }
  cout << cnt << endl;
  
}