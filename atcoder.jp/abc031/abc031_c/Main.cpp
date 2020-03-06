#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> ans;
  rep(l, n){
    int takahashi = -5000000;
    int aoki = -50000000;
    for(int r = 0; r < n; ++r){
      if(l == r) continue;
      int tmp_takahashi = 0;
      int tmp_aoki = 0;
      int start = min(r, l);
      for(int i = 0; i <= abs(r - l); ++i){
        if(i % 2 == 0) tmp_takahashi += a[i + start];
        else tmp_aoki += a[i + start];
      }

      if(tmp_aoki > aoki){
        takahashi = tmp_takahashi;
        aoki = tmp_aoki;        
      }
    }
    ans.push_back(takahashi);
  }
  sort(ans.begin(), ans.end());
  cout << ans.back() << endl;
}