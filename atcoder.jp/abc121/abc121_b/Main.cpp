#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;


int main(){
  int n, m, c;
  int ans = 0;
  cin >> n >> m >> c;
  vector<int> b(m);
  vector< vector<int> > a(n, vector<int>(m));

  for(int i = 0; i < m; i++) cin >>b[i];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; ++j){
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    int sum = c;
    for(int j = 0; j < m; j++){
      sum += a[i][j] * b[j];
    }
    if(sum > 0){
      ++ans;
    }
  }

  cout << ans << endl;

}
