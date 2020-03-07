#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  ll ab = a + b;
  cout << n / ab * a + min(a, n % ab) << endl;;
}