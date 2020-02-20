#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string a, b, c;
  cin >> a >> b >> c;
  if(a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0])
    cout << "YES" << endl;
  else cout << "NO" << endl;
}