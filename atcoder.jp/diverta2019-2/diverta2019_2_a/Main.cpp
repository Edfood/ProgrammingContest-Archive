#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, k;
  cin >> n >> k;
  if(k == 1) cout << 0 << endl;
  else cout << n - k << endl;
}