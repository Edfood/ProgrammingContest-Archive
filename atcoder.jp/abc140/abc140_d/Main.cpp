#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < n - 1; ++i) {
    if(s[i] == s[i + 1]) ++cnt;
  }
  cnt = min(n - 1, cnt + 2 * k);
  cout << cnt << endl;
}