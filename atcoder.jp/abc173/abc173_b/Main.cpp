#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int ac = 0, wa = 0, tle = 0, re = 0;
  int n;
  cin >> n;
  rep(i, n) {
    string s;
    cin >> s;
    if (s == "AC") {
      ac++;
    } else if (s == "WA") wa++;
    else if (s == "TLE") tle++;
    else if (s == "RE") re++;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}