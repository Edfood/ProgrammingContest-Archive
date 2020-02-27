#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  sort(a.begin(), a.end());
  if(a[0] == 5 && a[1] == 5 && a[2] == 7) cout << "YES" << endl;
  else cout << "NO" << endl;
}