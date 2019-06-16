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
  double W, H, x, y;
  cin >> W >> H >> x >> y;
  int ans1;
  double ans2 = 0;
  if(x == W / 2 && y == H / 2){
    ans1 = 1;
  } else {
    ans1 = 0;
  }


  ans2 = W * H / 2.0;

  cout << ans2 << " " << ans1 << endl;
}
