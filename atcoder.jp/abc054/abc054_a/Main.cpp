#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b;
  cin >> a >> b;
  if(a == 1) a+= 13;
  if(b == 1) b += 13;
  if(a == b) cout << "Draw" << endl;
  else if(a > b) cout << "Alice" << endl;
  else cout << "Bob" << endl;
}