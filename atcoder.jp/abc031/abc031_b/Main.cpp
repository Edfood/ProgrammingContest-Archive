#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int l, h, n;
  cin >> l >> h >> n;
  int sum = 0;
  rep (i, n) {
    int a;
    cin >> a;
    if (a > h) cout << -1 << endl;
    else cout << max(0, l - a) << endl;
  }
}