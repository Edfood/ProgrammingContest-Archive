#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  vector<char> a(26);
  string w;
  cin >> w;
  rep(i, w.length()){
    a[w[i] - 'a']++;
  }
  bool ans = true;
  rep(i, 26){
    if(a[i] % 2) ans = false;
  }
  cout << (ans ? "Yes" : "No") << endl;
}