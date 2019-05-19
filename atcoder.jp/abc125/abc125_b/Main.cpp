#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
using namespace std;


int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> c(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  for(int i = 0; i < n; ++i){
    cin >> c[i];
  }

  vector<int> diff(n);

  for(int i = 0; i < n; ++i){
    diff[i] = v[i] - c[i];
  }

  sort(diff.begin(), diff.end());
  reverse(diff.begin(), diff.end());
  int ans = 0;
  for(int i = 0; i < n; ++i){
    if(diff[i] <= 0) break;
    ans += diff[i];
  }

  cout << ans << endl;

}
