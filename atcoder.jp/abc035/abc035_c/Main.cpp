#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, q;
  cin >> n >> q;
  vector<pair<int, int>> lr(q);
  vector<int> imos(n + 1);
  vector<int> ans(n);

  rep(i, q){
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    imos[l]++;
    imos[r + 1]--;
  }
  int cur = 0;
  rep(i, n){
    cur += imos[i];
    ans[i] = cur;
  }
  rep(i, n){
    if(ans[i] % 2) cout << '1';
    else cout <<'0';
  }
  cout << endl;
  
}