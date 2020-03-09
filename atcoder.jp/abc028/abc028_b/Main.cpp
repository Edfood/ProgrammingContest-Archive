#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  vector<int> cnt(6);
  rep (i, s.length()) {
    ++cnt[s[i]-'A'];
  }
  rep (i, 6) {
    printf("%d%c", cnt[i], i == 5 ? '\n' : ' ');
  }
  
}