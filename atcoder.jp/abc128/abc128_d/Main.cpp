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
#include<set>
#include<iomanip>
#include<map>
#include<type_traits>
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;

int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    rep(i, n){
        cin >> v[i];
    }

    ll ans = 0;
    for(int i = 0; i <= min(k, n); ++i){
        for(int j = 0; i + j <= min(k, n); ++j){
            vector<ll> value(n, 0);
            int cur = 0;
            ll sum = 0;


            for(int l = 0; l < i; ++l){
                value[cur] = v[l];
                cur++;
            }

            for(int l = 0; l < j; l++){
                value[cur] = v[n - l - 1];
                cur++;
            }

            cur = 0;
            if(i + j < k){
                sort(value.begin(), value.end());
                for(int l = i + j; l < k; ++l){
                    if(value[cur] >= 0) break;
                    value[cur] = 0;
                    cur++;
                }
            }


            rep(l, n)   sum += value[l];

            ans = max(ans, sum);

        }
    }

    cout << ans << endl;


}