#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  string s;
  cin >> n >> s;
  string acs = "b";
  int i = 1;
  for (; acs.size() < s.size(); ++i) {
    if(i % 3 == 1) acs = "a" + acs + "c";
    else if(i % 3 == 2)  acs = "c" + acs + "a";
    else acs = "b" + acs + "b";
  }
  if(acs == s) {
    cout << i - 1 << endl;
  } else {
    puts("-1");
  }
}