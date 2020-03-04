#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b, n;
  cin >> a >> b >> n;

  for(int i = n; ; ++i){
    if(i % a == 0 && i % b == 0) {
      cout << i << endl;
      return 0;
    }
  }
}