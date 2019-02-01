#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> x(4);
  vector<int> y(4);
  int diffx, diffy;

  for(int i = 0; i < 2; ++i){
    cin >> x.at(i) >> y.at(i);
  }

  diffx = x.at(1) - x.at(0);
  diffy = y.at(1) - y.at(0);
  x.at(2) = x.at(1) - diffy;
  y.at(2) = y.at(1) + diffx;
  x.at(3) = x.at(2) - diffx;
  y.at(3) = y.at(2) - diffy;

  cout << x.at(2) << " " << y.at(2)<< " " << x.at(3) << " " << y.at(3) << endl;




  return 0;
}
