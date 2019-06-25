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
  int n;
  cin >> n;
  vector<int> A(n + 2);
  rep(i, n) {
    int a;
    cin >> a;
    A[i + 1] = a;
  }

  int sum = 0;
  for(int i = 1; i < n + 2; ++i){
    sum += abs(A[i] - A[i - 1]);
  }


  for(int i = 1; i <= n; ++i){
    int ans;
    ans = sum - abs(A[i] - A[i - 1]) - abs(A[i + 1] - A[i]) + abs(A[i + 1] - A[i - 1]);
    cout << ans << endl;
  }

}
