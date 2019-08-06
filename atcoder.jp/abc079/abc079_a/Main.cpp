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
  string s;
  cin >> s;
  if((s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3]))
    cout << "Yes" << endl;
  else cout << "No" << endl;
}
