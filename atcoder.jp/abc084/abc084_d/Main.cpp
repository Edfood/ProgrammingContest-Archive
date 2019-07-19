#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
#include<set>
#include<iomanip>
#include<map>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

vector<bool> p(100002, true);

int main(){
  int q;
  cin >> q;
  vector<int> l(q), r(q);
  rep(i, q) cin >> l[i] >> r[i];
  p[0] = false;
  p[1] = false;
  for(int i = 2; i <= 100001; ++i){
    if(p[i]){
      for(int j = i + i; j <= 100001; j += i){
        p[j] = false;
      }
    }
  }
  p[2] = true;

  vector<int> s(100003, 0);
  s[0] = 0;
  for(int i = 0; i <= 100000; ++i){
    s[i] = s[i - 1];
    if(p[i] && p[(i + 1) / 2]){
      s[i]++;
    }
  }

  for(int i = 0; i < q; ++i){
    int ans = s[r[i]] - s[l[i] - 1];

    cout << ans << endl;
   }


}
