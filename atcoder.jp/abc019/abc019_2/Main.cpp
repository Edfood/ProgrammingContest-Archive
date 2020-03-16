#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  vector<pair<char, int>> ans;
  char pre = 0;
  rep(i, s.length()) {
    if(pre != s[i]) {
      ans.emplace_back(s[i], 1);
      pre = s[i];
    } else {
      ans.back().second++;
    }
  }
  
  for (auto p : ans) {
    cout << p.first << p.second;
  }
  cout << endl;
}