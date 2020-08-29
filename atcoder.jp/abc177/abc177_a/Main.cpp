#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  double d, t, s;
  cin >> d >> t >> s;
  double time = d / s;
  if (time <= t) cout << "Yes" << endl;
  else cout << "No" << endl;
}