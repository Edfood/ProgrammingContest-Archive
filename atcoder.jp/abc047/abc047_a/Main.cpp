#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a + b == c || b + c == a || c + a == b) cout << "Yes" << endl;
  else cout << "No" << endl;
}