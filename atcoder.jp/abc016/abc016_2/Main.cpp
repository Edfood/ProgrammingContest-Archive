#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int minus = a - b;
  int plus = a + b;
  if(minus == plus && minus == c) cout << '?' << endl;
  else if(minus == c) cout << "-" << endl;
  else if(plus == c) cout << "+" << endl;
  else cout << "!" << endl;
}