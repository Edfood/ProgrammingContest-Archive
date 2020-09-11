#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int maximum = 0;
  rep(i, n) {
    cin >> a[i];
    if (a[maximum] < a[i]) maximum = i;
  }
  vector<int> b(n);
  b[0] = a[maximum];
  a.erase(a.begin() + maximum);

  int g = b[0];
  rep(i, n - 1) {
    int idx = 0;
    int max_gcd = 0;
    
    rep(j, a.size()) {
      int cur = gcd(g, a[j]);`
      if (cur > max_gcd) {
        max_gcd = cur;
        idx = j;
      }
    }
    b[i + 1] = a[idx];
    a.erase(a.begin() + idx);
    g = max_gcd;
  }

  rep(i, n) {
    cout << b[i] << " ";
  }
  cout << endl;

}

int main() {
  int test;
  cin >> test;
  rep(i, test) solve();
}