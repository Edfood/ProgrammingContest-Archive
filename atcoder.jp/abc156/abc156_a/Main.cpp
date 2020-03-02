#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n, r;
  cin >> n >> r;
  cout << r + max(0, 100 * (10 - n)) << endl;;
}