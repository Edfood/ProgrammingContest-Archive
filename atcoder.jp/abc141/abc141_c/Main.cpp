#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> score(n, k - q);
  rep(i, q) {
    int a;
    cin >> a;
    --a;
    score[a]++;
  }
  rep(i, n) {
    if(score[i] <= 0) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
}