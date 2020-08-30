#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const int INF = 1001001001;

void print_ans(vector<int> &a, int start = -1) {
  if (start != -1) cout << start << endl; 
  rep(i, a.size()) {
    if (a[i] == start) continue;
    cout << a[i] << endl;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<vector<int>> ones(40); // 10^9 < 2^40
  rep(i, n) {
    int cur = a[i];
    rep(j, 40) {
      if (1LL<<j&cur) ones[j].push_back(cur);
    }
  }

  for (int i = 39; i >= 0; --i) {
    if (ones[i].size() == 1) {
      int start = ones[i][0];
      print_ans(a, start);
      return 0;
    }
  }

  print_ans(a);

}