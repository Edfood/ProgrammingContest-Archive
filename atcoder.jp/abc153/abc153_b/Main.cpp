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
    int h, n;
    cin >> h >> n;
    vector<int> a(n);
    int sum = 0;
    rep(i, n){
        int a;
        cin >> a;
        sum += a;
    }

    if(h - sum > 0){
        cout  << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }


}