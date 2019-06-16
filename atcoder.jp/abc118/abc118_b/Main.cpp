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
#include<set>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int n;
  int m;
  cin >> n >> m;
  vector<int> k(n);
  vector<vector<int> > a(n);

  rep(i, n){
    int b;
    cin >> b;
    k[i] = b;
    rep(j, b){
      int c;
      cin >> c;
      c--;
      a[i].push_back(c);
    }
  }

  vector<int> ans(m);

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < k[i]; ++j){
      ans[a[i][j]]++;
    }
  }

  int tmp = 0;
  for(int i = 0; i < m; ++i){
    if(ans[i] == n)  tmp++;
  }
  cout << tmp << endl;
}
