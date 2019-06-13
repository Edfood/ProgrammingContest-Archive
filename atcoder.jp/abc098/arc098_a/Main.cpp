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
using namespace std;


typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int n;
  string s;
  cin >> n >> s;

  int mi;
  int l = 0;
  int r = 0;
  for(int i = 1; i < n; ++i){
    if(s[i] == 'E') r += 1;
  }
  mi = r;


  for(int i = 1; i < n; ++i){
    if(s[i - 1] == 'W') l++;
    if(s[i] == 'E') r--;
    mi = min(mi, l+r);
  }

  cout << mi << endl;
}
