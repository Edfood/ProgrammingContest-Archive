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
#include<type_traits>
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;


int main(){
  ll n;
  cin >> n;
  vector<ll> l(100);
  l[0] = 2;
  l[1] = 1;
  for(int i = 2; i < 100; ++i){
    l[i] = l[i - 1] + l[i - 2];
  }

  cout << l[n] << endl;
}
