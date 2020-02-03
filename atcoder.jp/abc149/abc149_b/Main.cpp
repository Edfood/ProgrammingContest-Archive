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
typedef pair<int,int> P;


#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)

const int mod = 1000000007;

int main(){
    ll a, b, k;
    cin >> a >> b >> k;

    ll ansa, ansb;
    ansa = max(a - k, (ll)0);

    k = max(k - a, (ll)0);

    ansb = max(b - k, (ll)0);

    cout << ansa << ' ' << ansb << endl;


}