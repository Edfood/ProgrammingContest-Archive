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
#include<tuple>
using namespace std;


typedef pair<int, int> P;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int a, b;
  vector<int> v(4);
  v[1] = 1;
  v[2] = 2;
  v[3] = 3;
  cin >> a >> b;
  v[a] = 0;
  v[b] = 0;
  int ans = 0;
  rep(i, 4){
    ans += v[i];
  }

  cout << ans << endl;
}