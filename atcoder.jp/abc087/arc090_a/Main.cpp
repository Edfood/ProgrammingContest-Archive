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



int main(){
  int n;
  cin >> n;
  vector<vector<int> > a(2, vector<int>(n));

  rep(i, 2)
    rep(j, n) cin >> a[i][j];

  vector<int> s1(n + 1, 0), s2(n + 1, 0);

  for(int i = 0; i < n; ++i){
    s1[i + 1] = s1[i] + a[0][i];
    s2[i + 1] = s2[i] + a[1][i];
  }

  int ans = 0;

  for(int i = 1; i <= n; ++i){
    ans = max(ans, s1[i] + s2[n] - s2[i - 1]);
  }

  cout << ans << endl;
}
