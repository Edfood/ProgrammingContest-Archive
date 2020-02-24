#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a * b > c * d) cout << a * b << endl;
  else cout << c * d << endl;
}