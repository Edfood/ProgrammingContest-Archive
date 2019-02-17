#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;

int main(){
  vector<int> a(6);
  for(int i =0; i < 6; ++i){
    cin >> a[i];
  }
  vector<int> count(4, 0);
  for(int i = 0; i < 6; ++i){
    for(int j = 1; j <= 4; ++j){
      if(a[i] == j){
        count[j - 1] += 1;
      }
    }
  }
  sort(count.begin(), count.end());


  if(count[0] == 1 && count[1] == 1 && count[2] == 2 && count[3] == 2){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
