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
  vector<int> w(n);
  rep(i, n) cin >> w[i];
  vector<int> v;

  rep(i, n) {
    int idx = 0;
    int minv = INF;

    rep(j, v.size()) {
      if (w[i] <= v[j]) {
        if (minv > v[j]) {
          minv = v[j];
          idx = j;
        }
      }
    }
    if(minv == INF) v.push_back(w[i]);
    else v[idx] = w[i];
  }

  cout << v.size() << endl;
}