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
#include<deque>
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
  vector<int> color(8);
  int count = 0;
  rep(i, n){
    int index = a[i] / 400;
    if(index >= 8)  count++;
    else color[index]++;
  }
  int used = 0;
  rep(i, 8){
    if(color[i] > 0)  used++;
  }
  int mi = max(used, 1);
  int ma = used + count;
  cout << mi << ' ' << ma << endl;
 
}
