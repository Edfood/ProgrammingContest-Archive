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
#include<tuple>
using namespace std;


typedef long long ll;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;

int main(){
    int n;
    int m = INT_MAX;
    cin >> n;

    vector<int> p(n);

    rep(i, n){
        cin >> p[i];
    }

    int ans = 0;

    rep(i, n){
        if(m >= p[i]){
            ans++;
            m = p[i];
        }
    }

    cout << ans << endl;
    
}