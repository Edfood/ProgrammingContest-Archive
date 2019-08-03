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
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const ll mod = 1000000007;
int main(){
  ll n;
  cin >> n;
  vector<pair<ll, ll> > cnt1(100010, make_pair(0, 0)), cnt2(100010, make_pair(0, 0));
  vector<ll> v(n);
  rep(i, n) cin >> v[i];


  for(ll i = 0; i < n; ++i){

    if(i % 2 == 0) {
      cnt1[v[i]].first++;
      cnt1[v[i]].second = v[i];
    } else {
      cnt2[v[i]].first++;
      cnt2[v[i]].second = v[i];
    }
  }

  sort(cnt1.begin(), cnt1.end());
  sort(cnt2.begin(), cnt2.end());
  reverse(cnt1.begin(), cnt1.end());
  reverse(cnt2.begin(), cnt2.end());


  //rep(i, 15) cout << cnt1[i].first << " ";


  ll num1, num2 = - 1;
  if(cnt1[0].second == cnt2[0].second){
    if(cnt1[0].first + cnt2[1].first < cnt1[1].first + cnt2[0].first ){
      num1 = cnt1[1].second;
      num2 = cnt2[0].second;
    } else {
      num1 = cnt1[0].second;
      num2 = cnt2[1].second;
    }
  } else {
    num1 = cnt1[0].second;
    num2 = cnt2[0].second;
  }
  /*
  cout << endl;
  cout << num1 << " " << num2 <<endl;
  */

  ll ans = 0;
  for(ll i = 0; i < n; ++i){
    if(i % 2 == 0){
      if(num1 != v[i])  ans++;
    } else {
      if(num2 != v[i])  ans++;
    }
  }

  cout << ans << endl;

}
