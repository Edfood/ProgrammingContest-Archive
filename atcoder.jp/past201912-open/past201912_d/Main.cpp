#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> vec(n + 1);
  rep(i, n) vec[a[i]]++;
  int x = -1, y = -1;
  rep(i, n) {
    if (vec[i + 1] == 0) x = i + 1;
    else if (vec[i + 1] == 2) y = i + 1;
  }

  swap(x, y);
  if (x == -1) cout << "Correct" << endl;
  else cout << x << " " << y << endl;
}