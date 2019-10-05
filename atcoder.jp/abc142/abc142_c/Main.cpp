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
  int n;
  cin >> n;

  vector<pair<int, int> > a(n);

  rep(i, n){
    cin >> a[i].first;
    a[i].second = i;
  }
  
  sort(a.begin(), a.end());

  rep(i, n){
    cout << a[i].second + 1 << ' ';
  }

  cout << endl;


}