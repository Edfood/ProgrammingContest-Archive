#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
int hon[] = {2,4,5,7,9};
int pon[] = {0,1,6,8};
int bon[] = {3};

int main() {
  int n;
  cin >> n;
  int d = n % 10;
  rep(i, 5) if(d == hon[i]) {
    cout << "hon" << endl;
    return 0;
  }
  rep(i, 4) if(d == pon[i]) {
    cout << "pon" << endl;
    return 0;
  }
  cout << "bon" << endl;
  
}