#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int d;
  cin >> d;
  d = 25 - d;

  cout << "Christmas";
  for(int i = 0; i < d; i++){
    cout << " " << "Eve";
  }

  cout << endl;
  return 0;
}
