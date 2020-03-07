#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  double a, b;
  cin >> a >> b;
  int ans = -1;
  for(double i = 1000000; i >= 1; --i){
    int valuea = i * 0.08;
    int valueb = i * 0.1;
    if(valuea == a && valueb == b){
      ans = i;
    }
  }
  cout << ans << endl;
}