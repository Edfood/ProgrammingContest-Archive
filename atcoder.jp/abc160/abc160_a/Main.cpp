#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  if(s[2] == s[3] && s[4] == s[5]) cout << "Yes" << endl;
  else cout << "No" << endl;
}