#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
  int n;
  bool ans = true;
  cin >> n;
  vector<string> word(n);

  for(int i = 0; i < n; ++i){
    cin >> word.at(i);
  }

  char before = word.at(0).at(0);

  for(int i = 0; i < n; i++){
    if(before != word.at(i).at(0)){
      ans = false;
      break;
    }
    before = word.at(i).at(word.at(i).length() - 1);
    for(int j = i + 1; j < n; j++){
      if(word.at(i) == word.at(j)){
        ans = false;
        break;
      }
    }
  }

  if(ans){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
