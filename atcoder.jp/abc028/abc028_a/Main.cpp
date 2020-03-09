#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  string a;
  if (n == 100) a = "Perfect";
  else if (n >= 90) a = "Great";
  else if (n >= 60) a = "Good";
  else a = "Bad";
  cout << a << endl;
}