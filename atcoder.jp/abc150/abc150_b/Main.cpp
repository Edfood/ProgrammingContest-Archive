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
    string s;
    cin >> n >> s;

    int ans = 0;
    for(int i = 0; i < n - 2; ++i){
        string substr;
        rep(j, 3){
            substr.push_back(s[i + j]);
        }

        if(substr == "ABC") ans++;
    }

    cout << ans << endl;


}