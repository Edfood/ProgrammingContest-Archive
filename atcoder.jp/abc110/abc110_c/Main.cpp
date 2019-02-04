#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  int len = s.length();
  char stmp, ttmp;
  vector<int> scount(26, 0);
  vector<int> tcount(26, 0);
  bool ans = true;

  for(int i = 0; i < len; ++i){
    scount.at(s.at(i) - 'a')+= 1;
  }

  for(int i = 0; i < len; ++i){
    tcount.at(t.at(i) - 'a')+= 1;
  }
  sort(scount.begin(), scount.end());
  sort(tcount.begin(), tcount.end());

  for(int i = 0; i < 26; ++i){
    if(scount.at(i) != tcount.at(i)){
      ans = false;
    }
  }

  if(ans){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }




}
