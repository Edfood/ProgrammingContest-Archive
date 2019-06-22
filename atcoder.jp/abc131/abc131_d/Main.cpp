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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int gcd (int a, int b){
  while(true){
    if(a < b) swap(a, b);
    if(b == 0) break;
    a = a % b;
  }
  return a;
}

int main(){
  int n;
  cin >> n;
  vector<pair<ll, ll> > ab(n);
  rep(i, n){
    int a, b;
    cin >> a >> b;
    ab[i].first = b;
    ab[i].second = a;
  }
  sort(ab.begin(), ab.end());

  bool ans = true;
  ll sum = 0;
  ll nowb = ab[0].first;
  for(int i = 0; i < n; ++i){
    if(nowb != ab[i].first){
      if(sum > nowb){
        ans = false;
        break;
      } else {
        nowb = ab[i].first;
      }
    }
    sum += ab[i].second;
  }
  
  if(sum > nowb){
    ans = false;
  }

  if(ans){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
