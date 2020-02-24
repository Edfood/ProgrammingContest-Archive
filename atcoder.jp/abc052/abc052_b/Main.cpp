#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int x = 0;
  int ans = 0;
  int n;
  string s;
  cin >> n >> s;
  rep(i, n){
    if(s[i] == 'I') x++;
    else x--;
    ans = max(x, ans);
  }
  cout << ans << endl;
}