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

int main(){
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> a(m);

  rep(i, m){
    cin >> a[i];
  }
  int count = 0;
  int itr = 0;
  for(int i = 0; i != x; ++i){
    if(a[itr] == i){
      count++;
      itr++;
    }
  }

  int ans = min(count, (int)a.size() - count);
  cout << ans << endl;
}
