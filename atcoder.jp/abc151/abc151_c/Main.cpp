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
  ll n, m;
  cin >> n >> m;
  vector<ll> problem(n + 1, 0);
  ll correct = 0, penalty = 0;

  vector<bool> ac(n + 1, false);
  rep(i, m){
    ll p;
    string s;
    cin >> p >> s;

    if(s == "AC"){
      if(ac[p] == false) {
        correct++;
        ac[p] = true;
        penalty += problem[p];
      }
    } else if(s == "WA") {
      problem[p]++;
    }

  }

  cout << correct << endl;
  cout << penalty << endl;
}