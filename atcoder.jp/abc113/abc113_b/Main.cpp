#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  int n, t, a;
  int ans;
  double temp, now;

  cin >> n >> t >> a;

  vector<double> h(n);
  for(int i = 0; i < n; ++i){
    cin >> h.at(i);
  }

  ans = 0;
  now = t - h.at(ans) * 0.006;
  for(int i = 0; i < n; i++){
    temp = t - h.at(i) * 0.006;

    if(fabs(a - now) > fabs(a - temp)){
      ans = i;
      now = temp;
    }
  }

  cout << ans + 1 << endl;


}
