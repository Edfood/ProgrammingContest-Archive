#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> l(n);
  int m = -1;
  int soeji;
  int sum = 0;

  for(int i = 0; i < n; ++i){
    cin >> l.at(i);
  }
  for(int i = 0; i < n; ++i){
    if(l.at(i) > m){
      soeji = i;
      m = l.at(i);
    }
  }

  for(int i = 0; i < n; ++i){
    if(i == soeji) continue;
    sum += l.at(i);
  }

  if(sum > m){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
