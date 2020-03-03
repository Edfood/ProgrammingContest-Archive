#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int w, h;
  cin >> w >> h;
  if(w / 4 == h / 3) cout << "4:3" << endl;
  else cout << "16:9" << endl;
}