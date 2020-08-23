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
  int h, w, m;
  cin >> h >> w >> m;
  
  vector<int> cnth(h), cntw(w);
  set<P> st;

  rep(i, m) {
    int th, tw;
    cin >> th >> tw;
    --th; --tw;
    cnth[th]++;
    cntw[tw]++;
    st.emplace(th, tw);
  }

  int ans = 0;
  int maxh = 0;
  int maxw = 0;
  rep(i, h) chmax(maxh, cnth[i]);
  rep(i, w) chmax(maxw, cntw[i]);
  vector<int> th, tw;
  rep(i, h) if (maxh == cnth[i]) th.push_back(i);
  rep(i, w) if (maxw == cntw[i]) tw.push_back(i);

  ans = maxh + maxw;
  for (int i : th) for(int j : tw) {
    if (st.count(P(i, j))) continue;
    cout << ans << endl;
    return 0;
  }

  ans--;
  cout << ans << endl;
  return 0;

}