#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  bool ans = false;
  int value = a;
  for(int i = 0; i < b ; ++i){
    value += a;
    if(value % b == c){
      ans = true;
      break;
    }
  }
  if(ans) cout << "YES" << endl;
  else cout << "NO" << endl;
}