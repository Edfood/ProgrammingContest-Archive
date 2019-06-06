#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
using namespace std;

typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

vector<int> a(5);
int k;
bool solve(void){
  for(int i = 0; i < 5; ++i){
    for(int j = i; j < 5; ++j){
      if(abs(a[i] - a[j]) > k)  return false;
    }
  }

  return true;

}

int main(){
  rep(i, 5){
    cin >> a[i];
  }

  cin >> k;

  bool ans;
  ans = solve();

  if(ans){
    cout << "Yay!" << endl;
  } else {
    cout << ":(" <<endl;
  }


}
