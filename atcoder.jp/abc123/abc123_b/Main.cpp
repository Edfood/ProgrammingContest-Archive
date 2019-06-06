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


int main(){
  vector<int> a(5);
  rep(i, 5){
    cin >> a[i];
  }

  int ans = 0;
  int mini = 0;
  rep(i, 5){
    if(a[mini] % 10 > a[i] % 10 && a[i] % 10 != 0){
      mini = i;
    }
  }

  rep(i, 5){
    if(i == mini) continue;
    ans += a[i];
    if(a[i] % 10 > 0){
      ans += - a[i] % 10 + 10;
    }
  }

  ans += a[mini];

  cout << ans << endl;


}
