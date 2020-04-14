#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++)
const int mod = 1e9 + 7;

int main(void){
    
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    ll ans = 0;
    
    rep(i, 61) {
        ll cnt = 0;
        rep(j, n) {
            if(a[j]>>i & 1) ++cnt; 
        }
        ans += ((cnt * (n - cnt)) % mod) * ((1LL<<i) % mod);
        ans %= mod;
    }
    
    cout << ans << endl;
    
}
