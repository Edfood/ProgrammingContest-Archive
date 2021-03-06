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
    int n;
    cin >> n;
    vector<int> num(n);

    rep(i, n){
        num[i] = i + 1;
    }
    vector<int> p(n), q(n);
    rep(i, n){
        cin >> p[i];
    }
    rep(i, n){
        cin >> q[i];
    }

    int a, b;
    int count = 0;
    do{
        if(num == p) a = count;
        if(num == q) b = count;
        count++;
    }while(next_permutation(num.begin(), num.end()));

    cout << abs(a - b) << endl;
}