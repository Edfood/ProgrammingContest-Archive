#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  rep (i, n) cin >> s[i];
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j >= 0; --j) {
      cout << s[j][i];
    }
    cout << endl;
  }
}