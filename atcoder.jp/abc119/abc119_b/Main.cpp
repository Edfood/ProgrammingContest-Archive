#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;

int main(){
  int n;
  cin >> n;
  double ans = 0;
  vector<double> x(n);
  vector<string> u(n);

  for(int i = 0; i < n; ++i){
    cin >> x.at(i) >> u.at(i);
  }

  for(int i = 0; i < n; ++i){
    if(u.at(i) == "JPY"){
      ans += x.at(i);
    } else {
      ans += x.at(i) * 380000;
    }
  }

  cout << ans << endl;

}
