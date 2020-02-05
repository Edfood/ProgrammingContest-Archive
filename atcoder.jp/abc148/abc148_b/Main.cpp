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
#include<tuple>
using namespace std;


typedef pair<int, int> P;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int n;
  string s, t;
  cin >> n;
  cin >> s >> t;

  string str;

  rep(i, n){
    str += s[i];
    str += t[i];
  }

  cout << str << endl;
}