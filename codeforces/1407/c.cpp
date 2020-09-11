#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int x = 1;
  vector<bool> used(n);
  for (int i = 2; i <= n; ++i) {
    int y = i;
    int p1, p2;
    cout << "? " << x << " " << y << endl;
    cin >> p1;
    cout << "? " << y << " " << x << endl;
    cin >> p2;

    if (p1 > p2) {
      a[x - 1] = p1;
      used[p1 - 1] = true; 
      x = y;
    } else {
      a[y - 1] = p2;
      used[p2 - 1] = true;
      x = x;
    }
  }
  a[x - 1] = n;

  cout << "! ";
  rep(i, n) {
    printf("%d%c", a[i], (i == n - 1 ? '\n' : ' '));
  }
  fflush(stdout);
}