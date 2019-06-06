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
using namespace std;

typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  ll n;
  cin >> n;
  vector<ll> a(5);
  rep(i, 5){
    cin >> a[i];
  }
  ll ans = 0;
  ll mi = a[0];
  rep(i, 5){
    mi = min(mi, a[i]);
  }

  ans += 4 + n / mi;
  if(n % mi > 0){
    ans++;
  }
  cout << ans << endl;

}
