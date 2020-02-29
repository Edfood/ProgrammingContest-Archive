#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int h1, h2, w1, w2;
  cin >> h1 >> w1 >> h2 >> w2;
  if(h1 == h2 || w1 == h2 || w2 == h1 || w1 == w2) cout << "YES" << endl;
  else cout << "NO" << endl;
}