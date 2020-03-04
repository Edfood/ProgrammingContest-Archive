#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  int k;
  cin >> s >> k;
  int n = s.length();
  int ans = 0;
  set<string> subs;
  for(int i = 0; i < n - (k - 1) ; ++i){
    subs.insert(s.substr(i, k));
  }
  cout << subs.size() << endl;
}