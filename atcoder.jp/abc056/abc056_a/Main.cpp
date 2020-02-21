#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  char a, b;
  cin >> a >> b;
  if(a == 'D'){
    if(b == 'D') b = 'H';
    else b = 'D';
  }
  cout << b << endl;

}