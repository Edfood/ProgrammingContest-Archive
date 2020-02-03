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

const int N = pow(10,6);

vector<bool> isp(N+1, true);

void sieve() {
  isp[0] = false;
  isp[1] = false;
  for (int i=2; pow(i,2)<=N; i++) {
    if (isp[i]) for(int j=2; i*j<=N; j++) isp[i*j] = false;
  }
}

int main(){
    int x;
    cin >> x;

    sieve();
    for(int i = x;; ++i){
        if(isp[i]){
            cout << i << endl;
            return 0;
        }
    }
}