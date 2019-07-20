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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int n;
  cin >> n;
  vector<int> a(n), tmp(n);
  rep(i, n){
    cin >> a[i];
    tmp[i] = a[i];
  }

  sort(tmp.begin(), tmp.end());
  reverse(tmp.begin(), tmp.end());

  int first = tmp[0];
  int second = tmp[1];
  for(int i = 0; i < n; ++i){
    if(a[i] == first){
      cout << second<< endl;
    } else {
      cout << first << endl;
    }
  }

}
