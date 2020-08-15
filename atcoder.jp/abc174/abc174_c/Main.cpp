#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
const ll INF = 1001001001;

int main() {
  int k;
  cin >> k;
  int cur = 0;
  set<int> st;
  int ans = 0;

  while (1) {
    ans++; 
    cur = (cur * 10 + 7) % k;
    if (cur == 0) break;;
    auto it = st.find(cur);
    if (it != st.end()) {
      cout << -1 << endl;
      return 0;
    }

    st.insert(cur);
    
  }
  cout << ans << endl;
}
