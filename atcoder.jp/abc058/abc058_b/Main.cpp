#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string o, e;
  cin >> o >> e;
  int n = min(o.length(), e.length());
  rep(i, n){
    cout << o[i] << e[i];
  }
  if(o.length() > e.length()) cout << o[o.length() - 1];
  else if(o.length() < e.length())  cout << e[e.length() - 1];
  cout << endl;
}