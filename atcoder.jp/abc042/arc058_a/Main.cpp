#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  int k;
  cin >> n >> k;
  vector<int> d(k);
  rep(i, k) cin >> d[i];
  vector<int> e(k);
  int ans = n;
  while(true){
    bool ok = true;
    string s = to_string(ans);
    rep(i, s.length()){
      rep(j, d.size()){
        if(s[i] - '0' == d[j]){
          ok = false;
          break;
        }
      }
    }
    if(ok) break;
    ans++;
  }
  cout << ans << endl;
}