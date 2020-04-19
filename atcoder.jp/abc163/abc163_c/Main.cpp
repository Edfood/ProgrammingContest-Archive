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

  vector<int> cnt(n + 1);
  rep(i, n - 1) {
    int a;
    cin >> a;
    cnt[a]++;
  }

  rep(i, n) {
    cout << cnt[i + 1] << endl;
  }
}