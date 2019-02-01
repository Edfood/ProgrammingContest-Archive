#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> side(3);
  for(int i = 0; i < 3; i++){
    cin >> side.at(i);
  }

  sort(side.begin(), side.end());
  cout << side.at(0) * side.at(1)/2<< endl;
  return 0;
}
