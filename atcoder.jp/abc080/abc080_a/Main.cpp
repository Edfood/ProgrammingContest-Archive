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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

const int mod = 1000000007;


int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = min(a * n, b);
    cout << ans << endl;
}
