#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;  string ans = "";
  while (n != 0) {
    if(n % -2) {
      ans += "1";
      n -= 1;
    } else {
      ans += "0";
    }
    n /= -2;
  }
  reverse(ans.begin(), ans.end());
  if(ans == "") ans = "0";
  cout << ans << endl;
}