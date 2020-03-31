#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> cnt(100100);
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  int ans = 0;
  for (int i = 0; i <= 100100; ++i) {
    ans += max(cnt[i] - 1, 0);
  }
  cout << ans << endl;
}