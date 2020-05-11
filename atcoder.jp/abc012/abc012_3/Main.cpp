#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= 9; ++j) {
      sum += i * j;
    }
  }
  // cout << sum << endl;
  int diff = sum - n;
  for (int i = 1; i <= 9; ++i) {
    for(int j = 1; j <= 9; ++j) {
      int mul = i * j;
      if(mul == diff) {
        cout << i << " x " << j << endl;
      }
    }
  }
}