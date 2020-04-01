#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main() {
  int n;
  int a, b;
  cin >> n >> a >> b;
  int k;
  cin >> k;
  set<int> st;
  st.insert(a);
  if(st.count(b)) {
    cout << "NO" << endl;
    return 0;
  }
  st.insert(b);
  rep(i, k) {
    int p;
    cin >> p;
    if(st.count(p)) {
      cout << "NO" << endl;
      return 0;
    }
    st.insert(p);
  }
  cout << "YES" << endl;
}