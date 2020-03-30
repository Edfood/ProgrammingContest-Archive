#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;
ll rec(ll x) {
  if(x == 1) return 1;
  return 2 * rec(x / 2) + 1;
}

int main() {
  ll h;
  cin >> h;
  cout << rec(h) << endl;
}