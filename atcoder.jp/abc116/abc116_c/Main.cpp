#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N, count= 0;
  cin >> N;

  int j = 0;

  vector<int> vec(N);

  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }

  for(int i = 0; i < N;){
    if(vec.at(i) == 0) {
      i++;
      continue;
    }

    for(j = i; j < N; ){
      if(vec.at(j) == 0){
        break;
      }
      j++;
      continue;
    }

    for(int k = i; k < j; k++){
      vec.at(k)--;
    }
    count++;
  }
  cout << count << endl;
}
