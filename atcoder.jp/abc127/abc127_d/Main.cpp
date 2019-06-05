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
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  vector<pair<ll, ll> > b(m);
  vector<ll> ruiseki(n);

  rep(i, n)  cin >> a[i];
  rep(i, m){
    cin >> b[i].second >> b[i].first;
  }

  int itr = 0;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());
  bool deru = true;

  for(int i = 0; i < m  && itr < n && deru; ++i){
    for(int j = 0; j < b[i].second; ++j){
      if(a[itr] < b[i].first){
        a[itr] = b[i].first;
        itr++;

      } else {
        deru = false;
      }
    }
  }
  ll ans = 0;

  rep(i, n){
    ans += a[i];
  }
  cout << ans << endl;

}
