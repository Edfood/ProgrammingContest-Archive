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
    int n, m;
    cin >> n >> m;
    int sum = 0;
    rep(i, m) {
        int a;
        cin >> a;
        sum += a;
    }
    int ans = n - sum;
    ans = max(ans, -1);
    cout << ans << endl;
}
