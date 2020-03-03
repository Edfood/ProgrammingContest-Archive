#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string a, b;
  cin >> a >> b;
  if(a.length() > b.length()){
    cout << "GREATER"<< endl;
    return 0;
  } else if(a.length() < b.length()){
    cout << "LESS" << endl;
    return 0;
  }
  rep(i, a.length()){
    if(a[i] > b[i]) {
      cout << "GREATER"<< endl;
      return 0;
    } else if (a[i] < b[i]) {
      cout << "LESS"<< endl;
      return 0;
    }
  }
  cout << "EQUAL" << endl;
}