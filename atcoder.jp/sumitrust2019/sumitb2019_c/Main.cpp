#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

// 全探索
int main() {
  int x;
  cin >> x;
  int up = 0;
  int down = 0;
  bool ans = false;
  for(int i = 0; i < 1000000; ++i) {
    up += 105;
    down += 100;
    if(down <= x && x <= up) ans = true;
  }
  if(ans) cout << 1 << endl;
  else cout << 0 << endl;

}


// O(1)
// int main(){
//   int x;
//   cin >> x;
//   int up = x / 100;
//   int down = x % 100;
//   down = (down + 4) / 5;
//   if(up >= down) cout << 1 << endl;
//   else cout << 0 << endl;
// }