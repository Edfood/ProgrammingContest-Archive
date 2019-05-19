#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  else return gcd(b, a%b);
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }

  vector<int> l(n + 1);
  l[0] = 0;
  for(int i = 0; i < n; ++i){
    l[i + 1] = gcd(l[i], a[i]);
  }

  vector<int> r(n + 1);
  r[0] = 0;
  for(int i = n - 1; i >= 0; --i){
    r[i] = gcd(r[i + 1], a[i]);
  }

  int ans = 0;
  int tmp = 0;
  for(int i =0; i < n; ++i){
    tmp = gcd(l[i], r[i + 1]);
    if(tmp > ans){
      ans = tmp;
    }
  }

  cout << ans << endl;
}
