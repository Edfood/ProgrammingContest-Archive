#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
ll f[50];

int counter = 0;
int gcd(int a, int b) {
    cout << a << " " << b << endl;
    if (b == 0) return a;
    counter++;
    return gcd(b, a%b);
}


int main() {
  int k;
  cin >> k;
  ll a, b;
  f[1] = 1;
  f[2] = 1;
  for(int i = 3; i <= k + 2; ++i) {
    f[i] += f[i - 1];
    f[i] += f[i - 2];
  }

  // ll res = gcd(f[k + 2], f[k + 1]);
  // cout << counter << endl;

  cout << f[k + 2] << " " << f[k + 1] << endl;
}