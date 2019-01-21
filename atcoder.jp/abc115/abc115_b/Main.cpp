#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int N,  m = 0;
  int ans = 0;
  cin >> N;
  vector<int> p(N);

  for(int i = 0; i < N; i++){
    cin >> p.at(i);
  }

  for(int i = 0; i < N; i++){
    ans += p.at(i);
    if(p.at(i) > p.at(m)){
      m = i;
    }
  }

  ans -= p.at(m) / 2;

  cout << ans << endl;

  return 0;
}
