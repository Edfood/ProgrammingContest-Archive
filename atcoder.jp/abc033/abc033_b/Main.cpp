#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> p(n);
  rep(i, n) cin >> s[i] >> p[i];
  int index = 0;
  int sum = 0;
  rep(i, n){
    sum += p[i];
    if(p[index] < p[i]) index = i;
  }
  if(p[index] > sum / 2) cout << s[index] << endl;
  else cout << "atcoder" << endl;

}