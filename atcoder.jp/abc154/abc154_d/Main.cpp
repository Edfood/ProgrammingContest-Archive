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
    int n, k;
    cin >> n >> k;
    vector<double> p(n);
    rep(i, n)   cin >> p[i];
    ll s = 0;
    for(int i = 0; i < k; ++i){
        s += p[i];
    }

    vector<double> sum(n + 1, s);
    ll max_sum = s;
    ll index = k - 1;
    for(int i = k; i < n; ++i){
        sum[i + 1] = sum[i] + p[i] - p[i - k];
        if(max_sum < sum[i+1]){
            max_sum = sum[i+1];
            index = i;
        }
    }

    double ans = 0;
    for(int i = 0; i < k; ++i){
        if(p[index] == 1) ans += 1;
        else ans += (1 + p[index]) / 2;
        index--;
    }
    printf("%.10f\n", ans);
}