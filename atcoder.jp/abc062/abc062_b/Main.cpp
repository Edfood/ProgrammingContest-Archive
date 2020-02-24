#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  rep(i, h) cin >> a[i];
  rep(i, w + 2) cout << "#";
  cout << endl;
  rep(i, h){
    cout << "#" + a[i] + "#" << endl;
  }
  rep(i, w + 2) cout << "#";
  cout << endl;
}