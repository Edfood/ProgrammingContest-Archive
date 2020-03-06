#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  double takahashi = b / (a + b);
  double aoki = d / (c + d);
  if(takahashi > aoki) cout << "TAKAHASHI" << endl;
  else if( takahashi == aoki) cout << "DRAW" << endl;
  else cout << "AOKI" << endl;
}