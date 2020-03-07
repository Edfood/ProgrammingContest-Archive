#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  int x, y;
  cin >> x >> y;
  vector<int> a(n), b(m);
  ll ans = 0;
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  ll cur = 0;
  bool end = false;
  int aa = 0, bb = 0;
  while (!end) {
    if (ans % 2 == 0) {

      while(cur > a[aa]){
        
        if(aa + 1 >= n) {
          end = true;
          break;
        }
        ++aa;
      }
      if(end) break;
      cur = a[aa] + x;
      ++ans;

    } else {

      while(cur > b[bb]){
        if(bb + 1 >= m) {
          end = true;
          break;
        }
        ++bb;
      }
      if(end) break;
      cur = b[bb] + y;
      ++ans;
    }

  }

  cout << ans / 2 << endl;

}