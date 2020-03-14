#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int n;
void dfs(string s, int depth, int used) {
  
  if(depth == n) {
    printf("%s\n", s.c_str());
    return;
  }
  for(int i = 0; i < used + 1; ++i) {
    char c = 'a' + i;
    string tmp(1, c);
    if(i == used) dfs(s + tmp , depth + 1, used + 1);
    else dfs(s + tmp , depth + 1, used);
  }  
}

int main(){
  cin >> n;
  dfs("", 0, 0);
}