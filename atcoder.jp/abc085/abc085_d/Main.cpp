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
  int n, h;
  cin >> n >> h;
  vector<pair<int, int> > s(n), r(n);
  rep(i, n){
    int a, b;
    cin >> a >> b;
    s[i].first = a;
    s[i].second = b;
    r[i].first = b;
    r[i].second = a;
  }

  sort(s.begin(), s.end());
  sort(r.begin(), r.end());

  reverse(s.begin(), s.end());
  reverse(r.begin(), r.end());


  int itr = 0;
  int ans = 0;
  while(h > 0){
    if(s[0].first > r[itr].first){
      ans += h / s[0].first;
      if(h % s[0].first != 0) ans++;
      break;
    } else {
      h -= r[itr].first;
      itr++;
    }
    ans++;
  }

  cout << ans << endl;


}
