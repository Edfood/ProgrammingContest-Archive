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
#include<iomanip>
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
  char c[3][3];
  rep(i, 3){
    rep(j, 3) cin >> c[i][j];
  }

  rep(i, 3) cout << c[i][i];
  cout << endl;
}
