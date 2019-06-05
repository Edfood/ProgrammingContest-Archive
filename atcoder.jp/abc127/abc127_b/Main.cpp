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

int x2000;
int r, d;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
int dfs(int i){
  if(i == 0)  return x2000;

  int ans = r * dfs(i - 1) - d;
  cout << ans << endl;
  return ans;
}

int main(){
  cin >> r >> d >> x2000;

  dfs(10);
}
