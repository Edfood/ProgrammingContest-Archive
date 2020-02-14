#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
using namespace std;
typedef long long ll;
#define rep(i, N) for(ll (i)=0;(i)<(N);(i)++)

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  int index;
  rep(i, n) {
    cin >> a[i];
  }
  int it = 0;
  int ans = 0;
  while(it < n){
    if(it == 0) it += k;
    else it += k - 1;
    ans++;
  }
  cout << ans << endl;
}
