#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n = 5;
  vector<int> a(5);
  rep (i, 5) cin >> a[i];
  cout << max(a[4] + a[3] + a[0], a[4] + a[2] + a[1]) << endl;
}