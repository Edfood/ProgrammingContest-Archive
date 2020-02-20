#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> ans(n), b(m);
  rep(i, m) {
    int s, t;
    cin >> s >> t;
    s--; t--;
    ans[s]++;
    ans[t]++;
  } 
  rep(i, n){
    cout << ans[i] << endl;
  }

}