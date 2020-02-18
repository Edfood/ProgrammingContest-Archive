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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int count = 0;
  int two = 0;
  rep(i, n){
    if(a[i] % 4 == 0) count++;
    else if(a[i] % 2 == 0) two++;
  }
  if(two == n)  {
    cout << "Yes" << endl;
    return 0;
  }
  two = max(0, two - 1);

  if(count >= (n - count - 1 - two) && count > 0)  cout << "Yes" << endl;
  else cout << "No" << endl;
}
