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
  int a, b, c;
  cin >> a >> b >> c;
  bool ans = false;
  if(a == b && a != c)  ans = true;
  if(a == c && a != b)  ans = true;
  if(b == c && b != a)  ans = true;
  if(ans) cout << "Yes" << endl; 
  else cout <<"No" << endl;
}
