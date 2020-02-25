#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int a, b;
  char op;
  cin >> a >> op  >> b;
  cout << (op == '+' ? a + b : a - b) << endl;;

}