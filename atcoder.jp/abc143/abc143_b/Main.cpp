#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
#include<tuple>
#include<cassert>
using namespace std;
typedef pair<int, int> P;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

const int mod = pow(10, 9) + 7;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n)   cin >> d[i];
    ll ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            ans += d[i] * d[j];
        }
    }
    cout << ans << endl;
}