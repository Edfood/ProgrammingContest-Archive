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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
int gcd (int a, int b){
  while(true){
    if(a < b) swap(a, b);
    if(b == 0) break;
    a = a % b;
  }
  return a;
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n){
    cin >> a[i];
  }

  int g = a[0];
  for(int i = 1; i < n; ++i){
    g = gcd(g, a[i]);
  }

  cout << g << endl;



}
