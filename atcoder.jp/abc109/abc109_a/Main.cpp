#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b;
  cin >> a >> b;
  bool ans = false;
  for (int i = 1; i <= 3; ++i) {
    if(a * b * i % 2) ans = true;
  }
  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}