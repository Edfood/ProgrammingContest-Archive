#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  swap(x, y);
  swap(x, z);
  cout << x << " " << y << " " << z << endl;
  }